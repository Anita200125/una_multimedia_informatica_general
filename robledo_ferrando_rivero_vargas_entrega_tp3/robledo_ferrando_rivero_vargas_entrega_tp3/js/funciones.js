// Seleccionamos todas las imágenes con la clase 'img-agrandable'
const images = document.querySelectorAll('.img-agrandable');

images.forEach(img => {
  // Cuando el mouse entra en la imagen
  img.addEventListener('mouseenter', () => {
    // Guardamos el tamaño original para poder restaurarlo
    img.dataset.originalWidth = img.offsetWidth;
    img.dataset.originalHeight = img.offsetHeight;
    // Calculamos el nuevo tamaño (250%)
    const newWidth = img.offsetWidth * 2.5;
    const newHeight = img.offsetHeight * 2.5;
    // Aplicamos el tamaño aumentado
    img.style.width = newWidth + 'px';
    img.style.height = newHeight + 'px';
    // Opcional: cambiar cursor para indicar que se puede hacer clic
    img.style.cursor = 'zoom-out';
  });

  // Cuando el mouse sale de la imagen
  img.addEventListener('mouseleave', () => {
    // Restauramos el tamaño original
    if (img.dataset.originalWidth && img.dataset.originalHeight) {
      img.style.width = img.dataset.originalWidth + 'px';
      img.style.height = img.dataset.originalHeight + 'px';
    }
    // Restaurar cursor
    img.style.cursor = 'default';
  });
});


// esto funciona
// Función para ajustar las imágenes
function ajustarFotos() {
  const fotos = document.querySelectorAll('img.fotos');

  // Obtener el ancho total de la pantalla
  const anchoPantalla = window.innerWidth;

  // Número de imágenes
  const numFotos = fotos.length;

  if (numFotos === 0) return;

  // Calcula el espacio total disponible y el tamaño de cada imagen
  // ajusta ancho de cada imagen para que todas quepan en línea y con espacios iguales
  const espacioEntreFotos = 10; // espacio en píxeles entre fotos (puedes ajustarlo)
  
  // Calcula la ancho total de los espacios entre las fotos
  const totalEspacios = (numFotos - 1) * espacioEntreFotos;

  // Calcula la ancho total disponible para las fotos
  const anchoDisponible = anchoPantalla - totalEspacios;

  // Calcula la ancho individual de cada foto
  const anchoFoto = anchoDisponible / numFotos;

  // Aplicar los estilos
  fotos.forEach(foto => {
    foto.style.display = 'inline-block';
    foto.style.width = `${anchoFoto}px`;
    foto.style.height = 'auto'; // Mantiene proporción
    foto.style.marginRight = `${espacioEntreFotos}px`;
  });

  // Quitar el margen derecho del último
  if (fotos.length > 0) {
    fotos[fotos.length - 1].style.marginRight = '0';
  }
}

// Ejecutar la función al cargar y al redimensionar la ventana
window.addEventListener('load', ajustarFotos);
window.addEventListener('resize', ajustarFotos);





   // Página de Pablo FUNCIONES PARA EL MODAL
    function abrirSketch(url, titulo) {
        const modal = document.getElementById('modal-sketch');
        const frame = document.getElementById('sketch-frame');
        
        // Cargar el sketch en el iframe
        frame.src = url;
        
        // Mostrar modal
        modal.style.display = 'flex';
        
        // Agregar el título al documento (opcional)
        document.title = titulo + " - Ferrando Pablo";
    }

    function cerrarSketch() {
        const modal = document.getElementById('modal-sketch');
        const frame = document.getElementById('sketch-frame');
        
        // Ocultar modal
        modal.style.display = 'none';
        
        // Detener el sketch cerrando el iframe
        frame.src = '';
        
        // Restaurar título original
        document.title = "Portafolio - Ferrando Pablo";
    }

    // Cerrar modal al hacer clic fuera del contenido
    window.onclick = function(event) {
        const modal = document.getElementById('modal-sketch');
        if (event.target === modal) {
            cerrarSketch();
        }
    }

    // Cerrar modal con tecla ESC
    document.addEventListener('keydown', function(event) {
        if (event.key === 'Escape') {
            cerrarSketch();
        }
    });
    