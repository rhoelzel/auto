extern "C" void func_(int* ndim,double* u,int* icp,double* par,int* ijac,double* f,double* dfdu,double* dfdp)
{
  f[0]=par[0]*(u[1]-u[0]);
  f[1]=u[0]*(par[1]-u[2])-u[1];
  f[2]=u[0]*u[1]-par[2]*u[2];
}

extern "C" void stpnt_(int* ndim,double* u, double* par,double* t)
{
  u[0]=u[1]=u[2]=0;
  par[0]=10;par[1]=0;par[2]=8/3;
}

extern "C" void bcnd_(int* ndim,double *par,int* icp, int* nbc, double* u0,double* u1,double* fb,int* ijac, int* dbc)
{}

extern "C" void icnd_(int* ndim,double* par,int* icp,int* nint,double* u, double* uold,double* udot,double* upold,double* fi,int* ijac,double* dint)
{}

extern "C" void fopt_(int* ndim,double* u,int* icp,double* par, int* ijac, double* fs, double* dfdu,double* dfdp)
{}

extern "C" void pvls_(int* ndim,double* u,double* par)
{}
