//tablero 
var bloque = 25;
var filas = 20; 
var columnas = 40; 
var tablero; 
var ctx; 

//cabeza
var cabezaX = bloque * 10; 
var cabezaY = bloque * 10; 

var velocidadX = 0; 
var velocidadY = 0;

var cuerpo = []; 

var Perder = false; 

//comida
var comidaX;  
var comidaY;


window.onload = function(){

    //creando el tablero
    tablero = document.getElementById("tablero"); 
    tablero.height = filas * bloque; 
    tablero.width = columnas * bloque; 
    ctx =  tablero.getContext("2d"); 

    GenerarComida(); 
    document.addEventListener("keyup", CambioDireccion);
    //Juego(); 
    setInterval(Juego, 1000/10);
}

 /**
 * Descripción de que hace la función
 * @method Nombre de la función
 * @param {string} ParámetroA - Explicación de que valor almacena ParámetroA
 * @param {number} ParámetroB - Explicación de que valor almacena ParámetroB
 * @return Valor que retorna
 */
let Juego = () =>{
    //si perdiste --> deja de dibujar y actualizar el canvas
    if(Perder){
        return; 
    }

    //styleando el tablero 
    ctx.fillStyle = "black"; 
    ctx.fillRect(0, 0, tablero.width, tablero.height); 
    //styleando la comida
    ctx.fillStyle = "red"; 
    ctx.fillRect(comidaX, comidaY, bloque, bloque);

        //simulacion de comer la comida
    if (cabezaX == comidaX && cabezaY == comidaY) {
        cuerpo.push([comidaX, comidaY]);
        GenerarComida();
    }

    //el cuerpo siga a la cabeza luego de que come la comida
    for (let i=cuerpo.length-1; i>0; i--) {
        cuerpo[i] = cuerpo[i-1];
    }
    if (cuerpo.length) {
        cuerpo[0] = [cabezaX, cabezaY];
    }


    //styleando la serpiente 
    ctx.fillStyle = "green";
    //actualiza las coordenadas de la cabeza dependiendo de la tecla presionada 
    cabezaX = cabezaX + (velocidadX * bloque); 
    cabezaY += velocidadY * bloque; 
    ctx.fillRect(cabezaX, cabezaY, bloque, bloque); 
    for(let i=0; i<cuerpo.length; i++){
        ctx.fillRect(cuerpo[i][0], cuerpo[i][1], bloque, bloque);
    }

        //condiciones para perder
        //si la cabeza choca con los extremos
        if (cabezaX < 0 || cabezaX > columnas*bloque-1 || cabezaY < 0 || cabezaY > filas*bloque-1) {
            Perder = true;
            alert("HAS PERDIDO");
        }
        //si se come a si mismo
        for (let i = 0; i < cuerpo.length; i++) {
            if (cabezaX == cuerpo[i][0] && cabezaY == cuerpo[i][1]) {
                Perder = true;
                alert("HAS PERDIDO");
            }
        }
 

}

 /**
 * Descripción de que hace la función
 * @method Nombre de la función
 * @param {string} ParámetroA - Explicación de que valor almacena ParámetroA
 * @param {number} ParámetroB - Explicación de que valor almacena ParámetroB
 * @return Valor que retorna
 */
let GenerarComida = () =>{
    /*Generamos los valores de la comida de manera random
    Math.floor rendodea el numero dado para abajo (3.7 -> 3)
    Math.random numero aleatorio entre [0, 1) entonces lo mul
    tiplicamos por comunas o filas para que sea entre 0 y 20 */
    comidaX = Math.floor(Math.random() * columnas) * bloque; 
    comidaY = Math.floor(Math.random() * filas) * bloque; 
}

let CambioDireccion = (tecla) =>{
    /*tecla.code verifica si la tecla que presiono el usuario 
    es alguna de las flechas del teclado y dependiendo de eso 
    le da el valor a la velocidad en x y en y*/
    if (tecla.code == "ArrowUp" && velocidadY != 1) {
        velocidadX = 0;
        velocidadY = -1;
    }
    else if (tecla.code == "ArrowDown" && velocidadY != -1) {
        velocidadX = 0;
        velocidadY = 1;
    }
    else if (tecla.code == "ArrowLeft" && velocidadX != 1) {
        velocidadX = -1;
        velocidadY = 0;
    }
    else if (tecla.code == "ArrowRight" && velocidadX != -1) {
        velocidadX = 1;
        velocidadY = 0;
    }
}