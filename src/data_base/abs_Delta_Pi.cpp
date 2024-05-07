#include "ToolFunctions.h"

double abs_Delta_Pi(double x)
{
    double limit = 0;
    if ((0 <= x) && (x <= 0.0957257)) {
        limit = 0.000459321 + (x - 0) * (0.000820876 - 0.000459321) / (0.0957257 - 0);
    }
    if ((0.0957257 <= x) && (x <= 0.11059)) {
        limit = 0.000820876 + (x - 0.0957257) * (0.00109756 - 0.000820876) / (0.11059 - 0.0957257);
    }
    if ((0.11059 <= x) && (x <= 0.126511)) {
        limit = 0.00109756 + (x - 0.11059) * (0.001444 - 0.00109756) / (0.126511 - 0.11059);
    }
    if ((0.126511 <= x) && (x <= 0.157279)) {
        limit = 0.001444 + (x - 0.126511) * (0.00225052 - 0.001444) / (0.157279 - 0.126511);
    }
    if ((0.157279 <= x) && (x <= 0.180612)) {
        limit = 0.00225052 + (x - 0.157279) * (0.00296079 - 0.00225052) / (0.180612 - 0.157279);
    }
    if ((0.180612 <= x) && (x <= 0.200775)) {
        limit = 0.00296079 + (x - 0.180612) * (0.00405567 - 0.00296079) / (0.200775 - 0.180612);
    }
    if ((0.200775 <= x) && (x <= 0.22517)) {
        limit = 0.00405567 + (x - 0.200775) * (0.00546638 - 0.00405567) / (0.22517 - 0.200775);
    }
    if ((0.22517 <= x) && (x <= 0.252745)) {
        limit = 0.00546638 + (x - 0.22517) * (0.00754823 - 0.00546638) / (0.252745 - 0.22517);
    }
    if ((0.252745 <= x) && (x <= 0.284553)) {
        limit = 0.00754823 + (x - 0.252745) * (0.0102558 - 0.00754823) / (0.284553 - 0.252745);
    }
    if ((0.284553 <= x) && (x <= 0.312123)) {
        limit = 0.0102558 + (x - 0.284553) * (0.0136016 - 0.0102558) / (0.312123 - 0.284553);
    }
    if ((0.312123 <= x) && (x <= 0.329084)) {
        limit = 0.0136016 + (x - 0.312123) * (0.0156006 - 0.0136016) / (0.329084 - 0.312123);
    }
    if ((0.329084 <= x) && (x <= 0.351346)) {
        limit = 0.0156006 + (x - 0.329084) * (0.0187807 - 0.0156006) / (0.351346 - 0.329084);
    }
    if ((0.351346 <= x) && (x <= 0.375723)) {
        limit = 0.0187807 + (x - 0.351346) * (0.0222468 - 0.0187807) / (0.375723 - 0.351346);
    }
    if ((0.375723 <= x) && (x <= 0.400101)) {
        limit = 0.0222468 + (x - 0.375723) * (0.0263526 - 0.0222468) / (0.400101 - 0.375723);
    }
    if ((0.400101 <= x) && (x <= 0.424473)) {
        limit = 0.0263526 + (x - 0.400101) * (0.0299815 - 0.0263526) / (0.424473 - 0.400101);
    }
    if ((0.424473 <= x) && (x <= 0.462626)) {
        limit = 0.0299815 + (x - 0.424473) * (0.0381878 - 0.0299815) / (0.462626 - 0.424473);
    }
    if ((0.462626 <= x) && (x <= 0.500772)) {
        limit = 0.0381878 + (x - 0.462626) * (0.0463411 - 0.0381878) / (0.500772 - 0.462626);
    }
    if ((0.500772 <= x) && (x <= 0.534675)) {
        limit = 0.0463411 + (x - 0.500772) * (0.0531474 - 0.0463411) / (0.534675 - 0.500772);
    }
    if ((0.534675 <= x) && (x <= 0.569639)) {
        limit = 0.0531474 + (x - 0.534675) * (0.0619448 - 0.0531474) / (0.569639 - 0.534675);
    }
    if ((0.569639 <= x) && (x <= 0.600366)) {
        limit = 0.0619448 + (x - 0.569639) * (0.0716196 - 0.0619448) / (0.600366 - 0.569639);
    }
    if ((0.600366 <= x) && (x <= 0.637445)) {
        limit = 0.0716196 + (x - 0.600366) * (0.0821373 - 0.0716196) / (0.637445 - 0.600366);
    }
    if ((0.637445 <= x) && (x <= 0.671352)) {
        limit = 0.0821373 + (x - 0.637445) * (0.0965096 - 0.0821373) / (0.671352 - 0.637445);
    }
    if ((0.671352 <= x) && (x <= 0.707372)) {
        limit = 0.0965096 + (x - 0.671352) * (0.110683 - 0.0965096) / (0.707372 - 0.671352);
    }
    if ((0.707372 <= x) && (x <= 0.732802)) {
        limit = 0.110683 + (x - 0.707372) * (0.124912 - 0.110683) / (0.732802 - 0.707372);
    }
    if ((0.732802 <= x) && (x <= 0.768826)) {
        limit = 0.124912 + (x - 0.732802) * (0.146767 - 0.124912) / (0.768826 - 0.732802);
    }
    if ((0.768826 <= x) && (x <= 0.796376)) {
        limit = 0.146767 + (x - 0.768826) * (0.169693 - 0.146767) / (0.796376 - 0.768826);
    }
    if ((0.796376 <= x) && (x <= 0.819692)) {
        limit = 0.169693 + (x - 0.796376) * (0.196203 - 0.169693) / (0.819692 - 0.796376);
    }
    if ((0.819692 <= x) && (x <= 0.84936)) {
        limit = 0.196203 + (x - 0.819692) * (0.226848 - 0.196203) / (0.84936 - 0.819692);
    }
    if ((0.84936 <= x) && (x <= 0.871623)) {
        limit = 0.226848 + (x - 0.84936) * (0.275302 - 0.226848) / (0.871623 - 0.84936);
    }
    if ((0.871623 <= x) && (x <= 0.902363)) {
        limit = 0.275302 + (x - 0.871623) * (0.347851 - 0.275302) / (0.902363 - 0.871623);
    }
    if ((0.902363 <= x) && (x <= 0.91933)) {
        limit = 0.347851 + (x - 0.902363) * (0.418768 - 0.347851) / (0.91933 - 0.902363);
    }
    if ((0.91933 <= x) && (x <= 0.939478)) {
        limit = 0.418768 + (x - 0.91933) * (0.516492 - 0.418768) / (0.939478 - 0.91933);
    }
    if ((0.939478 <= x) && (x <= 0.959631)) {
        limit = 0.516492 + (x - 0.939478) * (0.663253 - 0.516492) / (0.959631 - 0.939478);
    }
    if ((0.959631 <= x) && (x <= 0.971301)) {
        limit = 0.663253 + (x - 0.959631) * (0.779392 - 0.663253) / (0.971301 - 0.959631);
    }
    if ((0.971301 <= x) && (x <= 0.978729)) {
        limit = 0.779392 + (x - 0.971301) * (0.872593 - 0.779392) / (0.978729 - 0.971301);
    }
    if ((0.978729 <= x) && (x <= 0.989293)) {
        limit = 0.872593 + (x - 0.978729) * (0.730596 - 0.872593) / (0.989293 - 0.978729);
    }
    if ((0.989293 <= x) && (x <= 0.998797)) {
        limit = 0.730596 + (x - 0.989293) * (0.606793 - 0.730596) / (0.998797 - 0.989293);
    }
    if ((0.998797 <= x) && (x <= 1.01043)) {
        limit = 0.606793 + (x - 0.998797) * (0.546324 - 0.606793) / (1.01043 - 0.998797);
    }
    if ((1.01043 <= x) && (x <= 1.02312)) {
        limit = 0.546324 + (x - 1.01043) * (0.491878 - 0.546324) / (1.02312 - 1.01043);
    }
    if ((1.02312 <= x) && (x <= 1.0411)) {
        limit = 0.491878 + (x - 1.02312) * (0.428779 - 0.491878) / (1.0411 - 1.02312);
    }
    if ((1.0411 <= x) && (x <= 1.06438)) {
        limit = 0.428779 + (x - 1.0411) * (0.379846 - 0.428779) / (1.06438 - 1.0411);
    }
    if ((1.06438 <= x) && (x <= 1.09401)) {
        limit = 0.379846 + (x - 1.06438) * (0.328439 - 0.379846) / (1.09401 - 1.06438);
    }
    if ((1.09401 <= x) && (x <= 1.12047)) {
        limit = 0.328439 + (x - 1.09401) * (0.290953 - 0.328439) / (1.12047 - 1.09401);
    }
    if ((1.12047 <= x) && (x <= 1.19667)) {
        limit = 0.290953 + (x - 1.12047) * (0.219272 - 0.290953) / (1.19667 - 1.12047);
    }
    if ((1.19667 <= x) && (x <= 1.24006)) {
        limit = 0.219272 + (x - 1.19667) * (0.19423 - 0.219272) / (1.24006 - 1.19667);
    }
    if ((1.24006 <= x) && (x <= 1.27923)) {
        limit = 0.19423 + (x - 1.24006) * (0.177696 - 0.19423) / (1.27923 - 1.24006);
    }
    if ((1.27923 <= x) && (x <= 1.2951)) {
        limit = 0.177696 + (x - 1.27923) * (0.165234 - 0.177696) / (1.2951 - 1.27923);
    }
    if ((1.2951 <= x) && (x <= 1.31416)) {
        limit = 0.165234 + (x - 1.2951) * (0.166558 - 0.165234) / (1.31416 - 1.2951);
    }
    if ((1.31416 <= x) && (x <= 1.3597)) {
        limit = 0.166558 + (x - 1.31416) * (0.16787 - 0.166558) / (1.3597 - 1.31416);
    }
    if ((1.3597 <= x) && (x <= 1.3904)) {
        limit = 0.16787 + (x - 1.3597) * (0.167845 - 0.16787) / (1.3904 - 1.3597);
    }
    if ((1.3904 <= x) && (x <= 1.42853)) {
        limit = 0.167845 + (x - 1.3904) * (0.171927 - 0.167845) / (1.42853 - 1.3904);
    }
    if ((1.42853 <= x) && (x <= 1.45817)) {
        limit = 0.171927 + (x - 1.42853) * (0.163776 - 0.171927) / (1.45817 - 1.42853);
    }
    if ((1.45817 <= x) && (x <= 1.48993)) {
        limit = 0.163776 + (x - 1.45817) * (0.158549 - 0.163776) / (1.48993 - 1.45817);
    }
    if ((1.48993 <= x) && (x <= 1.50474)) {
        limit = 0.158549 + (x - 1.48993) * (0.146245 - 0.158549) / (1.50474 - 1.48993);
    }
    if ((1.50474 <= x) && (x <= 1.52591)) {
        limit = 0.146245 + (x - 1.50474) * (0.132732 - 0.146245) / (1.52591 - 1.50474);
    }
    if ((1.52591 <= x) && (x <= 1.5513)) {
        limit = 0.132732 + (x - 1.52591) * (0.115701 - 0.132732) / (1.5513 - 1.52591);
    }
    if ((1.5513 <= x) && (x <= 1.5767)) {
        limit = 0.115701 + (x - 1.5513) * (0.104164 - 0.115701) / (1.5767 - 1.5513);
    }
    if ((1.5767 <= x) && (x <= 1.60951)) {
        limit = 0.104164 + (x - 1.5767) * (0.093774 - 0.104164) / (1.60951 - 1.5767);
    }
    if ((1.60951 <= x) && (x <= 1.64868)) {
        limit = 0.093774 + (x - 1.60951) * (0.0915134 - 0.093774) / (1.64868 - 1.60951);
    }
    if ((1.64868 <= x) && (x <= 1.66881)) {
        limit = 0.0915134 + (x - 1.64868) * (0.0976075 - 0.0915134) / (1.66881 - 1.64868);
    }
    if ((1.66881 <= x) && (x <= 1.68894)) {
        limit = 0.0976075 + (x - 1.66881) * (0.10244 - 0.0976075) / (1.68894 - 1.66881);
    }
    if ((1.68894 <= x) && (x <= 1.708)) {
        limit = 0.10244 + (x - 1.68894) * (0.104941 - 0.10244) / (1.708 - 1.68894);
    }
    if ((1.708 <= x) && (x <= 1.74295)) {
        limit = 0.104941 + (x - 1.708) * (0.108366 - 0.104941) / (1.74295 - 1.708);
    }
    if ((1.74295 <= x) && (x <= 1.77788)) {
        limit = 0.108366 + (x - 1.74295) * (0.103226 - 0.108366) / (1.77788 - 1.74295);
    }
    if ((1.77788 <= x) && (x <= 1.80647)) {
        limit = 0.103226 + (x - 1.77788) * (0.0975424 - 0.103226) / (1.80647 - 1.77788);
    }
    if ((1.80647 <= x) && (x <= 1.86257)) {
        limit = 0.0975424 + (x - 1.80647) * (0.0885145 - 0.0975424) / (1.86257 - 1.80647);
    }
    if ((1.86257 <= x) && (x <= 1.9208)) {
        limit = 0.0885145 + (x - 1.86257) * (0.0796757 - 0.0885145) / (1.9208 - 1.86257);
    }
    if ((1.9208 <= x) && (x <= 2)) {
        limit = 0.0796757 + (x - 1.9208) * (0.0694344 - 0.0796757) / (2 - 1.9208);
    }
    return limit;
}
