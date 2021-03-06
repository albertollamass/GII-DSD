/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculadora.h"

bool_t
xdr_ecuacionCuadrada (XDR *xdrs, ecuacionCuadrada *objp)
{
	register int32_t *buf;

	 if (!xdr_double (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->b))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->c))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->res1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->res2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_vect (XDR *xdrs, vect *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->vect_val, (u_int *) &objp->vect_len, ~0,
		sizeof (double), (xdrproc_t) xdr_double))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_suma_1_argument (XDR *xdrs, suma_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_resta_1_argument (XDR *xdrs, resta_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_multiplicacion_1_argument (XDR *xdrs, multiplicacion_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_division_1_argument (XDR *xdrs, division_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_cuadratica_1_argument (XDR *xdrs, cuadratica_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg3))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_sumavectores_1_argument (XDR *xdrs, sumavectores_1_argument *objp)
{
	 if (!xdr_vect (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_vect (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_restavectores_1_argument (XDR *xdrs, restavectores_1_argument *objp)
{
	 if (!xdr_vect (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_vect (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_productovectores_1_argument (XDR *xdrs, productovectores_1_argument *objp)
{
	 if (!xdr_vect (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_vect (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_divisionvectores_1_argument (XDR *xdrs, divisionvectores_1_argument *objp)
{
	 if (!xdr_vect (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_vect (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_productoescalar_1_argument (XDR *xdrs, productoescalar_1_argument *objp)
{
	 if (!xdr_vect (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_vect (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}
