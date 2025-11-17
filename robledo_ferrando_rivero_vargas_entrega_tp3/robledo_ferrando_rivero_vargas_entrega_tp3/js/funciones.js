// GALERÍA MODAL - SOLO ESTE CÓDIGO
document.addEventListener('DOMContentLoaded', function() {
    // Obtener el modal
    const modal = document.getElementById("modal");
    const modalImg = document.getElementById("img01");
    const pieText = document.getElementById("pie");
    const spanCerrar = document.getElementsByClassName("cerrar")[0];

    // Para cada imagen con la clase 'img-agrandable'
    const images = document.querySelectorAll('.img-agrandable');
    
    images.forEach(function(img) {
        // Al hacer clic en cualquier imagen
        img.addEventListener('click', function() {
            modal.style.display = "block";
            modalImg.src = this.src;
            pieText.innerHTML = this.alt; // Usa el texto alt como descripción
        });
    });

    // Cerrar modal al hacer clic en la X
    spanCerrar.onclick = function() {
        modal.style.display = "none";
    }

    // Cerrar modal al hacer clic fuera de la imagen
    window.onclick = function(event) {
        if (event.target == modal) {
            modal.style.display = "none";
        }
    }
});






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
    