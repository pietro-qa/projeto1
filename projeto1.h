/*============================================================================*/
/* CSF13 - 2021-1 - PROJETO 1                                                 */
/*----------------------------------------------------------------------------*/
/* Bogdan T. Nassu - btnassu@utfpr.edu.br                                     */
/* Leyza E. B. Dorini - leyza@utfpr.edu.br                                    */
/*============================================================================*/
/** Fun��es pedidas e auxiliares para o 1o projeto da disciplina Fundamentos de
 * Programa��o 1, 1o semestre de 2021, prof. Bogdan T. Nassu e Leyza E. B.
 * Dorini, Universidade Tecnol�gica Federal do Paran� - C�mpus Curitiba. */
/*============================================================================*/

#ifndef __PROJETO1_H
#define __PROJETO1_H

/*============================================================================*/
/* Fun��o do projeto. */

unsigned int definePontoDeAcesso (int n_antenas);

/*----------------------------------------------------------------------------*/
/* Fun��es auxiliares que DEVEM ser chamadas pelos alunos. */

float pegaX (int a);
float pegaY (int a);

/*----------------------------------------------------------------------------*/
/* Fun��es auxiliares que N�O DEVEM ser chamadas pelos alunos. */

void criaVetorAntenas (int tamanho);
void destroiVetorAntenas ();
void adicionaAntena (int pos, float x, float y);
void mostraAntenas (int n);

/*============================================================================*/
#endif /* __PROJETO1_H */
