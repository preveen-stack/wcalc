#include "mex.h"
extern Gatefunc mex_air_coil_calc;
extern Gatefunc mex_air_coil_syn;
extern Gatefunc mex_bars_calc;
extern Gatefunc mex_coax_calc;
extern Gatefunc mex_coax_syn;
extern Gatefunc mex_coplanar_calc;
extern Gatefunc mex_coplanar_syn;
extern Gatefunc mex_coupled_microstrip_calc;
extern Gatefunc mex_coupled_microstrip_syn;
extern Gatefunc mex_coupled_stripline_calc;
extern Gatefunc mex_coupled_stripline_syn;
extern Gatefunc mex_ic_microstrip_calc;
extern Gatefunc mex_ic_microstrip_syn;
extern Gatefunc mex_microstrip_calc;
extern Gatefunc mex_microstrip_syn;
extern Gatefunc mex_parallel_rc_p2s;
extern Gatefunc mex_parallel_rc_s2p;
extern Gatefunc mex_parallel_rl_p2s;
extern Gatefunc mex_parallel_rl_s2p;
extern Gatefunc mex_stripline_calc;
extern Gatefunc mex_stripline_syn;
static GenericTable Tab[]={ 
{mex_gateway, mex_air_coil_calc,"err msg"},
{mex_gateway, mex_air_coil_syn,"err msg"},
{mex_gateway, mex_bars_calc,"err msg"},
{mex_gateway, mex_coax_calc,"err msg"},
{mex_gateway, mex_coax_syn,"err msg"},
{mex_gateway, mex_coplanar_calc,"err msg"},
{mex_gateway, mex_coplanar_syn,"err msg"},
{mex_gateway, mex_coupled_microstrip_calc,"err msg"},
{mex_gateway, mex_coupled_microstrip_syn,"err msg"},
{mex_gateway, mex_coupled_stripline_calc,"err msg"},
{mex_gateway, mex_coupled_stripline_syn,"err msg"},
{mex_gateway, mex_ic_microstrip_calc,"err msg"},
{mex_gateway, mex_ic_microstrip_syn,"err msg"},
{mex_gateway, mex_microstrip_calc,"err msg"},
{mex_gateway, mex_microstrip_syn,"err msg"},
{mex_gateway, mex_parallel_rc_p2s,"err msg"},
{mex_gateway, mex_parallel_rc_s2p,"err msg"},
{mex_gateway, mex_parallel_rl_p2s,"err msg"},
{mex_gateway, mex_parallel_rl_s2p,"err msg"},
{mex_gateway, mex_stripline_calc,"err msg"},
{mex_gateway, mex_stripline_syn,"err msg"},
};

int C2F(libsci_wcalc_gateway)()
{ Rhs = Max(0, Rhs);
(*(Tab[Fin-1].f))(Tab[Fin-1].name,Tab[Fin-1].F);
 return 0;
}
