#include <gl/glut.h>
#include <stdio.h>

void inicializar(){
    glClearColor(1,0,0,0);
}

void graficar(){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();

}

int main(int argc,char** argv){

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(250,300);
    glutInitWindowPosition(300,100);
    glutCreateWindow("Primera Ventana");
    inicializar();
    glutDisplayFunc(graficar);
    glutMainLoop();
    return 0;

}
