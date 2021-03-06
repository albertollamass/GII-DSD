/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULADORA_H_RPCGEN
#define _CALCULADORA_H_RPCGEN

#include <rpc/rpc.h>
#include "math.h"
#include "malloc.h"


#ifdef __cplusplus
extern "C" {
#endif


struct ecuacionCuadrada {
	double a;
	double b;
	double c;
	double res1;
	double res2;
};
typedef struct ecuacionCuadrada ecuacionCuadrada;

typedef struct {
	u_int vect_len;
	double *vect_val;
} vect;

struct suma_1_argument {
	double arg1;
	double arg2;
};
typedef struct suma_1_argument suma_1_argument;

struct resta_1_argument {
	double arg1;
	double arg2;
};
typedef struct resta_1_argument resta_1_argument;

struct multiplicacion_1_argument {
	double arg1;
	double arg2;
};
typedef struct multiplicacion_1_argument multiplicacion_1_argument;

struct division_1_argument {
	double arg1;
	double arg2;
};
typedef struct division_1_argument division_1_argument;

struct cuadratica_1_argument {
	double arg1;
	double arg2;
	double arg3;
};
typedef struct cuadratica_1_argument cuadratica_1_argument;

struct sumavectores_1_argument {
	vect arg1;
	vect arg2;
};
typedef struct sumavectores_1_argument sumavectores_1_argument;

struct restavectores_1_argument {
	vect arg1;
	vect arg2;
};
typedef struct restavectores_1_argument restavectores_1_argument;

struct productovectores_1_argument {
	vect arg1;
	vect arg2;
};
typedef struct productovectores_1_argument productovectores_1_argument;

struct divisionvectores_1_argument {
	vect arg1;
	vect arg2;
};
typedef struct divisionvectores_1_argument divisionvectores_1_argument;

struct productoescalar_1_argument {
	vect arg1;
	vect arg2;
};
typedef struct productoescalar_1_argument productoescalar_1_argument;

#define CALCULADORA 0x20000001
#define CALCULADORAV1 1

#if defined(__STDC__) || defined(__cplusplus)
#define SUMA 1
extern  double * suma_1(double , double , CLIENT *);
extern  double * suma_1_svc(double , double , struct svc_req *);
#define RESTA 2
extern  double * resta_1(double , double , CLIENT *);
extern  double * resta_1_svc(double , double , struct svc_req *);
#define MULTIPLICACION 3
extern  double * multiplicacion_1(double , double , CLIENT *);
extern  double * multiplicacion_1_svc(double , double , struct svc_req *);
#define DIVISION 4
extern  double * division_1(double , double , CLIENT *);
extern  double * division_1_svc(double , double , struct svc_req *);
#define CUADRATICA 5
extern  ecuacionCuadrada * cuadratica_1(double , double , double , CLIENT *);
extern  ecuacionCuadrada * cuadratica_1_svc(double , double , double , struct svc_req *);
#define SUMAVECTORES 6
extern  vect * sumavectores_1(vect , vect , CLIENT *);
extern  vect * sumavectores_1_svc(vect , vect , struct svc_req *);
#define RESTAVECTORES 7
extern  vect * restavectores_1(vect , vect , CLIENT *);
extern  vect * restavectores_1_svc(vect , vect , struct svc_req *);
#define PRODUCTOVECTORES 8
extern  vect * productovectores_1(vect , vect , CLIENT *);
extern  vect * productovectores_1_svc(vect , vect , struct svc_req *);
#define DIVISIONVECTORES 9
extern  vect * divisionvectores_1(vect , vect , CLIENT *);
extern  vect * divisionvectores_1_svc(vect , vect , struct svc_req *);
#define PRODUCTOESCALAR 10
extern  double * productoescalar_1(vect , vect , CLIENT *);
extern  double * productoescalar_1_svc(vect , vect , struct svc_req *);
extern int calculadora_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SUMA 1
extern  double * suma_1();
extern  double * suma_1_svc();
#define RESTA 2
extern  double * resta_1();
extern  double * resta_1_svc();
#define MULTIPLICACION 3
extern  double * multiplicacion_1();
extern  double * multiplicacion_1_svc();
#define DIVISION 4
extern  double * division_1();
extern  double * division_1_svc();
#define CUADRATICA 5
extern  ecuacionCuadrada * cuadratica_1();
extern  ecuacionCuadrada * cuadratica_1_svc();
#define SUMAVECTORES 6
extern  vect * sumavectores_1();
extern  vect * sumavectores_1_svc();
#define RESTAVECTORES 7
extern  vect * restavectores_1();
extern  vect * restavectores_1_svc();
#define PRODUCTOVECTORES 8
extern  vect * productovectores_1();
extern  vect * productovectores_1_svc();
#define DIVISIONVECTORES 9
extern  vect * divisionvectores_1();
extern  vect * divisionvectores_1_svc();
#define PRODUCTOESCALAR 10
extern  double * productoescalar_1();
extern  double * productoescalar_1_svc();
extern int calculadora_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_ecuacionCuadrada (XDR *, ecuacionCuadrada*);
extern  bool_t xdr_vect (XDR *, vect*);
extern  bool_t xdr_suma_1_argument (XDR *, suma_1_argument*);
extern  bool_t xdr_resta_1_argument (XDR *, resta_1_argument*);
extern  bool_t xdr_multiplicacion_1_argument (XDR *, multiplicacion_1_argument*);
extern  bool_t xdr_division_1_argument (XDR *, division_1_argument*);
extern  bool_t xdr_cuadratica_1_argument (XDR *, cuadratica_1_argument*);
extern  bool_t xdr_sumavectores_1_argument (XDR *, sumavectores_1_argument*);
extern  bool_t xdr_restavectores_1_argument (XDR *, restavectores_1_argument*);
extern  bool_t xdr_productovectores_1_argument (XDR *, productovectores_1_argument*);
extern  bool_t xdr_divisionvectores_1_argument (XDR *, divisionvectores_1_argument*);
extern  bool_t xdr_productoescalar_1_argument (XDR *, productoescalar_1_argument*);

#else /* K&R C */
extern bool_t xdr_ecuacionCuadrada ();
extern bool_t xdr_vect ();
extern bool_t xdr_suma_1_argument ();
extern bool_t xdr_resta_1_argument ();
extern bool_t xdr_multiplicacion_1_argument ();
extern bool_t xdr_division_1_argument ();
extern bool_t xdr_cuadratica_1_argument ();
extern bool_t xdr_sumavectores_1_argument ();
extern bool_t xdr_restavectores_1_argument ();
extern bool_t xdr_productovectores_1_argument ();
extern bool_t xdr_divisionvectores_1_argument ();
extern bool_t xdr_productoescalar_1_argument ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_CALCULADORA_H_RPCGEN */
