/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura que almacena la información pertinente a cada alumno    
typedef struct alumno_s {
    char apellidos[30];     //! Apellido del alummno (hasta 30 caracteres)
    char nombres[30];       //! Nombre del alumno (hasta 30 caracteres)
    char documento[11];     //! DNI del alumno (formato xx.xxx.xxx)
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/*!
 * @brief   Serializa la informacion de un alumno particular
 *
 * @param cadena Puntero al arreglo de caracteres que contiene la serializacion  
 * @param espacio Tamaño máximo del arreglo al que apunto cadena
 * @param alumno Tipo de dato que almacena la información de un alumno
 *
 * @return 
 *      @li TRUE La serialización fue exitosa
 *      @li FALSE Falló la serialización
 */

bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/*!
 * @brief   Serializa la informacion de todos los alumnos del arreglo ALUMNOS[]
 *
 * @param cadena Puntero al arreglo de caracteres que contiene la serializacion  
 * @param espacio Tamaño máximo del arreglo al que apunto cadena
 *
 * @return 
 *      @li TRUE La serialización fue exitosa
 *      @li FALSE Falló la serialización
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
