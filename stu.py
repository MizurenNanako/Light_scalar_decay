#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import sys
from pylab import *
import numpy as np
import matplotlib.pyplot as plt

data1 = np.loadtxt("./FS_Type_1stu_mA02.txt")






#####################################################
    #4 <<type_in<<" "<<mH<<" "<<mA<<" "<<mC<<" ";
    #3 <<"  "<<setw(4)<<S<<" "<<setw(4)<<T<<" "<<setw(4)<<U;
    #2 <<" "<<flaglhc2<<" "<<Zflaglhc2;
    #2 <<" "<<setw(4)<<chilhc2<<" "<<setw(4)<<Zchilhc2;
    #3 <<"  "<<setw(4)<<Re(kb)<<"  "<<setw(4)<<Re(kc)<<"  "<<setw(4)<<Re(ktau);
    #3 <<"  "<<setw(4)<<Re(kz)<<"  "<<setw(4)<<Re(kw)<<"  "<<setw(4)<<Re(kg);
    #1 <<"  "<<setw(4)<<Re(kgamma)<<" ";
####################################################

mH = data1[:,1]
mC = data1[:,3] # total
chilhc2 = data1[:,9]
Zchilhc2 = data1[:,10]

min0=min(chilhc2+Zchilhc2)
print min(chilhc2)
print min(Zchilhc2)
print min0

sig95=6
slec3 = (chilhc2+Zchilhc2 <= sig95 +min0+0.02) 


fig = plt.figure(figsize=(7,7))

plt.plot(mH[slec3], mC[slec3], '.',color='black')

# text(1680,1180,r"$\tan \beta$=50",color='magenta',fontsize=14,rotation=338)
xlabel(r"$m_H$ (GeV)",fontsize=22)
ylabel(r"$m_{H^\pm}$ (GeV)",fontsize=22)
xlim(1,125)
ylim(1,150)
title(r"STU+LHC R2: $m_A=0.2$ (GeV)",fontsize=25)

plt.savefig("stu_mA02.pdf",dpi=300)
# plt.show()

