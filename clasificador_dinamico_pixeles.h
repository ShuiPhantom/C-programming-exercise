/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   clasificador_dinamico_pixeles.h
 * Author: jcpenya
 *
 * Created on 9 de septiembre de 2022, 08:48
 */

#ifndef CLASIFICADOR_DINAMICO_PIXELES_H
#define CLASIFICADOR_DINAMICO_PIXELES_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

/**
 * It is responsible for dividing the image given as a path into the amount of
 * specified rows and columns to then find the section it has
 * more black pixels.
 * @param Path to jpg file
 * @param Cantidad de filas
 * @param Cantidad de columnas
 * @return The coordinates of the section with the most black pixels. The index
 * is base 1
 */
int* dividir_clasificar_imagen(char*,int,int);

char* numero_carnet(void);

#endif /* CLASIFICADOR_DINAMICO_PIXELES_H */

