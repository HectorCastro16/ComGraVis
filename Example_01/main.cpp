#include <gl/glut.h>
#include <stdio.h>

void inicializar(){

}

void graficar(){
    printf("Hola\n");
}

int main(int argc,char** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(250,300);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Primera Ventana");
    inicializar();
    glutDisplayFunc(graficar);
    glutMainLoop();
    return 0;

}
