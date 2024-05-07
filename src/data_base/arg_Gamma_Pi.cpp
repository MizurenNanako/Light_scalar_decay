#include "ToolFunctions.h"

double arg_Gamma_Pi(double x)
{
    double limit = 0;
    if ((0 <= x) && (x <= 0.281093)) {
        limit = 0 + (x - 0) * (0 - 0) / (0.281093 - 0);
    }
    if ((0.281093 <= x) && (x <= 0.321608)) {
        limit = 0 + (x - 0.281093) * (0.145338 - 0) / (0.321608 - 0.281093);
    }
    if ((0.321608 <= x) && (x <= 0.369017)) {
        limit = 0.145338 + (x - 0.321608) * (0.258444 - 0.145338) / (0.369017 - 0.321608);
    }
    if ((0.369017 <= x) && (x <= 0.427309)) {
        limit = 0.258444 + (x - 0.369017) * (0.440345 - 0.258444) / (0.427309 - 0.369017);
    }
    if ((0.427309 <= x) && (x <= 0.479668)) {
        limit = 0.440345 + (x - 0.427309) * (0.592759 - 0.440345) / (0.479668 - 0.427309);
    }
    if ((0.479668 <= x) && (x <= 0.521171)) {
        limit = 0.592759 + (x - 0.479668) * (0.740229 - 0.592759) / (0.521171 - 0.479668);
    }
    if ((0.521171 <= x) && (x <= 0.570561)) {
        limit = 0.740229 + (x - 0.521171) * (0.868075 - 0.740229) / (0.570561 - 0.521171);
    }
    if ((0.570561 <= x) && (x <= 0.616001)) {
        limit = 0.868075 + (x - 0.570561) * (0.990999 - 0.868075) / (0.616001 - 0.570561);
    }
    if ((0.616001 <= x) && (x <= 0.663424)) {
        limit = 0.990999 + (x - 0.616001) * (1.13849 - 0.990999) / (0.663424 - 0.616001);
    }
    if ((0.663424 <= x) && (x <= 0.700951)) {
        limit = 1.13849 + (x - 0.663424) * (1.21227 - 1.13849) / (0.700951 - 0.663424);
    }
    if ((0.700951 <= x) && (x <= 0.745395)) {
        limit = 1.21227 + (x - 0.700951) * (1.31063 - 1.21227) / (0.745395 - 0.700951);
    }
    if ((0.745395 <= x) && (x <= 0.796758)) {
        limit = 1.31063 + (x - 0.745395) * (1.43849 - 1.31063) / (0.796758 - 0.745395);
    }
    if ((0.796758 <= x) && (x <= 0.827377)) {
        limit = 1.43849 + (x - 0.796758) * (1.51225 - 1.43849) / (0.827377 - 0.796758);
    }
    if ((0.827377 <= x) && (x <= 0.855036)) {
        limit = 1.51225 + (x - 0.827377) * (1.58601 - 1.51225) / (0.855036 - 0.827377);
    }
    if ((0.855036 <= x) && (x <= 0.881718)) {
        limit = 1.58601 + (x - 0.855036) * (1.68432 - 1.58601) / (0.881718 - 0.855036);
    }
    if ((0.881718 <= x) && (x <= 0.906426)) {
        limit = 1.68432 + (x - 0.881718) * (1.78262 - 1.68432) / (0.906426 - 0.881718);
    }
    if ((0.906426 <= x) && (x <= 0.929182)) {
        limit = 1.78262 + (x - 0.906426) * (1.93495 - 1.78262) / (0.929182 - 0.906426);
    }
    if ((0.929182 <= x) && (x <= 0.944032)) {
        limit = 1.93495 + (x - 0.929182) * (2.05778 - 1.93495) / (0.944032 - 0.929182);
    }
    if ((0.944032 <= x) && (x <= 0.955937)) {
        limit = 2.05778 + (x - 0.944032) * (2.2199 - 2.05778) / (0.955937 - 0.944032);
    }
    if ((0.955937 <= x) && (x <= 0.967847)) {
        limit = 2.2199 + (x - 0.955937) * (2.39184 - 2.2199) / (0.967847 - 0.955937);
    }
    if ((0.967847 <= x) && (x <= 0.974826)) {
        limit = 2.39184 + (x - 0.967847) * (2.57359 - 2.39184) / (0.974826 - 0.967847);
    }
    if ((0.974826 <= x) && (x <= 0.979827)) {
        limit = 2.57359 + (x - 0.974826) * (2.74551 - 2.57359) / (0.979827 - 0.974826);
    }
    if ((0.979827 <= x) && (x <= 0.98478)) {
        limit = 2.74551 + (x - 0.979827) * (2.89288 - 2.74551) / (0.98478 - 0.979827);
    }
    if ((0.98478 <= x) && (x <= 0.986836)) {
        limit = 2.89288 + (x - 0.98478) * (3.00093 - 2.89288) / (0.986836 - 0.98478);
    }
    if ((0.986836 <= x) && (x <= 0.991552)) {
        limit = 3.00093 + (x - 0.986836) * (2.45085 - 3.00093) / (0.991552 - 0.986836);
    }
    if ((0.991552 <= x) && (x <= 0.994398)) {
        limit = 2.45085 + (x - 0.991552) * (2.16107 - 2.45085) / (0.994398 - 0.991552);
    }
    if ((0.994398 <= x) && (x <= 0.996296)) {
        limit = 2.16107 + (x - 0.994398) * (1.96953 - 2.16107) / (0.996296 - 0.994398);
    }
    if ((0.996296 <= x) && (x <= 0.999193)) {
        limit = 1.96953 + (x - 0.996296) * (1.80745 - 1.96953) / (0.999193 - 0.996296);
    }
    if ((0.999193 <= x) && (x <= 1.00407)) {
        limit = 1.80745 + (x - 0.999193) * (1.67485 - 1.80745) / (1.00407 - 0.999193);
    }
    if ((1.00407 <= x) && (x <= 1.01191)) {
        limit = 1.67485 + (x - 1.00407) * (1.53735 - 1.67485) / (1.01191 - 1.00407);
    }
    if ((1.01191 <= x) && (x <= 1.0168)) {
        limit = 1.53735 + (x - 1.01191) * (1.41949 - 1.53735) / (1.0168 - 1.01191);
    }
    if ((1.0168 <= x) && (x <= 1.02565)) {
        limit = 1.41949 + (x - 1.0168) * (1.33111 - 1.41949) / (1.02565 - 1.0168);
    }
    if ((1.02565 <= x) && (x <= 1.03846)) {
        limit = 1.33111 + (x - 1.02565) * (1.28203 - 1.33111) / (1.03846 - 1.02565);
    }
    if ((1.03846 <= x) && (x <= 1.05523)) {
        limit = 1.28203 + (x - 1.03846) * (1.27225 - 1.28203) / (1.05523 - 1.03846);
    }
    if ((1.05523 <= x) && (x <= 1.07497)) {
        limit = 1.27225 + (x - 1.05523) * (1.28214 - 1.27225) / (1.07497 - 1.05523);
    }
    if ((1.07497 <= x) && (x <= 1.09867)) {
        limit = 1.28214 + (x - 1.07497) * (1.33623 - 1.28214) / (1.09867 - 1.07497);
    }
    if ((1.09867 <= x) && (x <= 1.13324)) {
        limit = 1.33623 + (x - 1.09867) * (1.41001 - 1.33623) / (1.13324 - 1.09867);
    }
    if ((1.13324 <= x) && (x <= 1.15893)) {
        limit = 1.41001 + (x - 1.13324) * (1.49358 - 1.41001) / (1.15893 - 1.13324);
    }
    if ((1.15893 <= x) && (x <= 1.18757)) {
        limit = 1.49358 + (x - 1.15893) * (1.56243 - 1.49358) / (1.18757 - 1.15893);
    }
    if ((1.18757 <= x) && (x <= 1.22214)) {
        limit = 1.56243 + (x - 1.18757) * (1.64603 - 1.56243) / (1.22214 - 1.18757);
    }
    if ((1.22214 <= x) && (x <= 1.25375)) {
        limit = 1.64603 + (x - 1.22214) * (1.72962 - 1.64603) / (1.25375 - 1.22214);
    }
    if ((1.25375 <= x) && (x <= 1.28635)) {
        limit = 1.72962 + (x - 1.25375) * (1.81321 - 1.72962) / (1.28635 - 1.25375);
    }
    if ((1.28635 <= x) && (x <= 1.30512)) {
        limit = 1.81321 + (x - 1.28635) * (1.86729 - 1.81321) / (1.30512 - 1.28635);
    }
    if ((1.30512 <= x) && (x <= 1.33276)) {
        limit = 1.86729 + (x - 1.30512) * (1.91158 - 1.86729) / (1.33276 - 1.30512);
    }
    if ((1.33276 <= x) && (x <= 1.37621)) {
        limit = 1.91158 + (x - 1.33276) * (1.97065 - 1.91158) / (1.37621 - 1.33276);
    }
    if ((1.37621 <= x) && (x <= 1.4157)) {
        limit = 1.97065 + (x - 1.37621) * (2.01988 - 1.97065) / (1.4157 - 1.37621);
    }
    if ((1.4157 <= x) && (x <= 1.45025)) {
        limit = 2.01988 + (x - 1.4157) * (2.05436 - 2.01988) / (1.45025 - 1.4157);
    }
    if ((1.45025 <= x) && (x <= 1.49172)) {
        limit = 2.05436 + (x - 1.45025) * (2.12325 - 2.05436) / (1.49172 - 1.45025);
    }
    if ((1.49172 <= x) && (x <= 1.5243)) {
        limit = 2.12325 + (x - 1.49172) * (2.15772 - 2.12325) / (1.5243 - 1.49172);
    }
    if ((1.5243 <= x) && (x <= 1.57267)) {
        limit = 2.15772 + (x - 1.5243) * (2.2168 - 2.15772) / (1.57267 - 1.5243);
    }
    if ((1.57267 <= x) && (x <= 1.61809)) {
        limit = 2.2168 + (x - 1.57267) * (2.29552 - 2.2168) / (1.61809 - 1.57267);
    }
    if ((1.61809 <= x) && (x <= 1.65166)) {
        limit = 2.29552 + (x - 1.61809) * (2.32509 - 2.29552) / (1.65166 - 1.61809);
    }
    if ((1.65166 <= x) && (x <= 1.68226)) {
        limit = 2.32509 + (x - 1.65166) * (2.36448 - 2.32509) / (1.68226 - 1.65166);
    }
    if ((1.68226 <= x) && (x <= 1.72767)) {
        limit = 2.36448 + (x - 1.68226) * (2.39899 - 2.36448) / (1.72767 - 1.68226);
    }
    if ((1.72767 <= x) && (x <= 1.77604)) {
        limit = 2.39899 + (x - 1.72767) * (2.44825 - 2.39899) / (1.77604 - 1.72767);
    }
    if ((1.77604 <= x) && (x <= 1.83033)) {
        limit = 2.44825 + (x - 1.77604) * (2.4877 - 2.44825) / (1.83033 - 1.77604);
    }
    if ((1.83033 <= x) && (x <= 1.87179)) {
        limit = 2.4877 + (x - 1.83033) * (2.53203 - 2.4877) / (1.87179 - 1.83033);
    }
    if ((1.87179 <= x) && (x <= 1.91423)) {
        limit = 2.53203 + (x - 1.87179) * (2.56653 - 2.53203) / (1.91423 - 1.87179);
    }
    if ((1.91423 <= x) && (x <= 1.95273)) {
        limit = 2.56653 + (x - 1.91423) * (2.60103 - 2.56653) / (1.95273 - 1.91423);
    }
    if ((1.95273 <= x) && (x <= 1.97642)) {
        limit = 2.60103 + (x - 1.95273) * (2.61092 - 2.60103) / (1.97642 - 1.95273);
    }
    if ((1.97642 <= x) && (x <= 2)) {
        limit = 2.61092 + (x - 1.97642) * (2.62082 - 2.61092) / (2 - 1.97642);
    }
    return limit;
}
