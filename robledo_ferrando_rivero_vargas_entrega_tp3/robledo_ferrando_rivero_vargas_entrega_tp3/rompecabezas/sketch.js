let img;
let piezas = [];
let numCols = 5;  
let numRows = 4;  
let piezaW, piezaH;
let estado = "color"; 
let startTime;

function preload() {
  img = loadImage("imagen/pájaro.jpg");
}

function setup() {
  // 🖥️ Canvas que ocupa toda la pantalla
  createCanvas(windowWidth, windowHeight, WEBGL); 
  imageMode(CENTER);
  noStroke();

  // 📐 Ajustar imagen al tamaño de la pantalla
  img.resize(width, 0);

  piezaW = img.width / numCols;
  piezaH = img.height / numRows;

  dividirImagen();
  startTime = millis();
}

function draw() {
  background(200);

  let elapsed = millis() - startTime;

  if (estado === "color") {
    if (elapsed < 5000) {
      push();
      let shift = (frameCount % 360);
      colorMode(HSB, 360, 100, 100);
      tint(shift, 80, 100, 255);
      colorMode(RGB, 255);
      image(img, 0, 0);
      pop();
    } else {
      estado = "caida";
    }
  } 
  else if (estado === "caida") {
    for (let p of piezas) {
      p.updateCaida();
      p.display();
    }
    // después de 7s pasamos a reconstrucción
    if (elapsed > 12000) {
      estado = "reconstruccion";
    }
  } 
  else if (estado === "reconstruccion") {
    let todasVolvieron = true;
    for (let p of piezas) {
      p.updateReconstruccion();
      p.display();
      if (!p.volvio) todasVolvieron = false;
    }
  }
}

// dividir la imagen
function dividirImagen() {
  piezas = [];
  for (let i = 0; i < numCols; i++) {
    for (let j = 0; j < numRows; j++) {
      let g = createGraphics(piezaW, piezaH);
      g.image(img, -i * piezaW, -j * piezaH, img.width, img.height);

      let x = i * piezaW - img.width/2 + piezaW/2;
      let y = j * piezaH - img.height/2 + piezaH/2;

      piezas.push(new Pieza(g, x, y));
    }
  }
}

// clase Pieza
class Pieza {
  constructor(grafico, x, y) {
    this.grafico = grafico;
    this.x0 = x; // posición original
    this.y0 = y;
    this.x = x;
    this.y = y;
    this.z = 0;
    this.vy = random(2, 6); 
    this.angulo = random(TWO_PI); 
    this.va = random(-0.05, 0.05); 
    this.cayendo = true;
    this.volvio = false;
  }

  updateCaida() {
    if (this.cayendo) {
      this.y += this.vy;
      this.angulo += this.va;
      if (this.y > height/2) { 
        this.cayendo = false;
        this.y = height/2;
      }
    }
  }

  updateReconstruccion() {
    // interpolar de su posición actual hacia la original
    this.x = lerp(this.x, this.x0, 0.05);
    this.y = lerp(this.y, this.y0, 0.05);
    this.angulo = lerp(this.angulo, 0, 0.05);

    // si está suficientemente cerca, se fija exacto
    if (dist(this.x, this.y, this.x0, this.y0) < 1) {
      this.x = this.x0;
      this.y = this.y0;
      this.angulo = 0;
      this.volvio = true;
    }
  }

  display() {
    push();
    translate(this.x, this.y, this.z);
    rotateZ(this.angulo);
    texture(this.grafico);
    plane(piezaW, piezaH);
    pop();
  }
}

// 📱 Ajustar cuando cambia el tamaño de la ventana
function windowResized() {
  resizeCanvas(windowWidth, windowHeight);
  // Recalcular todo cuando cambia el tamaño
  img.resize(width, 0);
  piezaW = img.width / numCols;
  piezaH = img.height / numRows;
  dividirImagen();
}