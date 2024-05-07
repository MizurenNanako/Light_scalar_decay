#include "Model.h"

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <ostream>

// rsync -azv --progress --partial JC:/ccc/scratch/cont005/ra5528/rajecfil/THDMIIatQ/collider/HBHS_no_theory/samples/GAMBIT_THDMIIatQ_scan_output.hdf5 ./HBHS_no_theory.hdf5
// rsync -azv --progress --partial JC:/ccc/scratch/cont005/ra5528/rajecfil/THDMIIatQ/collider/HS_no_theory/samples/GAMBIT_THDMIIatQ_scan_output.hdf5 ./HS_no_theory.hdf5


using namespace std;

int main()
{

    ofstream outfile;
    outfile.open("dat_T1A_c1a.txt");

    // for(double i=0.1;i<=0.1;i=i+0.03){
    //     double mA=i;
    //     for(double j=-1;j<=0.2;j=j+1.1){
    for (double i = 0.1; i <= 10; i = i + 0.02) {
        double mA = i;
        cout << "mA = " << mA << endl;
        for (double j = log10(5); j <= 3; j = j + 0.02) {
            double tanb  = pow(10, j);
            double cosba = 0;
            double mH = 100.0, mHC = 100.;
            double lambdav = 0;

            BSModel model;
            model.set_model(1);
            model.set_cosba(cosba);
            model.set_tanb(tanb);
            model.set_mH(mH);
            model.set_mA(mA);
            model.set_mHC(mHC);
            model.set_lambdav(lambdav);

            double ltime = 6.58 * 1.e-25 / model.DecayWidth_ATotal();

            outfile << setw(10) << mA << setw(10) << tanb;

            // CP-odd Higgs decay
            outfile << setw(15) << ltime << setw(15) << model.DecayWidth_ATotal();
            outfile << setw(15) << model.BranchRatio_Aee() << setw(15) << model.BranchRatio_Amumu();
            cout << " ltime" << setw(15) << ltime << endl;
            // //CP-even Higgs decay
            // outfile<<setw(15)<<model.DecayWidth_Hee()<<setw(15)<<model.DecayWidth_HGluon();
            // outfile<<setw(15)<<model.BranchRatio_Hee()<<setw(15)<<model.BranchRatio_HGluon();

            outfile << endl;
        }
    }
}
