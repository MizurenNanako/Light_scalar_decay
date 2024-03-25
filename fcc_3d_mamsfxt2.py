#!/usr/bin/env python
# -*- coding: utf-8 -*-
import os
import sys
from pylab import *
import numpy as np
import matplotlib.pyplot as plt

#data1 = np.loadtxt("./3dxt2_tanb1_fcc.txt")

#data2 = np.loadtxt("./3dxt2_tanb2_fcc.txt")
data3 = np.loadtxt("./data/3dxt2_tanb3_fcc.txt")
#data5 = np.loadtxt("./3dxt2_tanb5_fcc.txt")
data7 = np.loadtxt("./data/3dxt2_tanb7_fcc.txt")
#data10 = np.loadtxt("./3dxt2_tanb10_fcc.txt")
data30 = np.loadtxt("./data/3dxt2_tanb30_fcc.txt")
data50 = np.loadtxt("./data/3dxt2_tanb50_fcc.txt")




#####################################################
#       write(7002,*) msf,mst1,mst2,mh1,mh2,tanb,	6
#     &               kz,kb,msb1,msb2,			4
#     &               chisqu,chisqu1,chisqu2,		3
#     &               chisqu3,chisqu32,chisqu4,		3
#     &               chisqu5,chisqu6,ma,gg		4

####################################################

#msf1 = data1[:,0]
#chisqu1 = data1[:,10] # total
#ma1 = data1[:,18]

#msf2 = data2[:,0]
#chisqu2 = data2[:,10] # total
#ma2 = data2[:,18]

msf3 = data3[:,0]
chisqu3 = data3[:,10] # total
ma3 = data3[:,18]


#msf5 = data5[:,0]
#chisqu5 = data5[:,10] # total
#ma5 = data5[:,18]

msf7 = data7[:,0]
chisqu7 = data7[:,10] # total
ma7 = data7[:,18]
#msf72 = data72[:,0]
#chisqu72 = data72[:,10] # total
#ma72 = data72[:,18]

#msf10 = data10[:,0]
#chisqu10 = data10[:,10] # total
#ma10 = data10[:,18]
#msf102 = data102[:,0]
#chisqu102 = data102[:,10] # total
#ma102 = data102[:,18]

msf30 = data30[:,0]
chisqu30 = data30[:,10] # total
ma30 = data30[:,18]
#msf302 = data302[:,0]
#chisqu302 = data302[:,10] # total
#ma302 = data302[:,18]

#msf50 = data50[:,0]
#chisqu50 = data50[:,10] # total
#ma50 = data50[:,18]

msf50 = data50[:,0]
chisqu50 = data50[:,10] # total
ma50 = data50[:,18]

#msf502 = data502[:,0]
#chisqu502 = data502[:,10] # total
#ma502 = data502[:,18]

#msf503 = data503[:,0]
#chisqu503 = data503[:,10] # total
#ma503 = data503[:,18]

#msf504 = data504[:,0]
#chisqu504 = data504[:,10] # total
#ma504 = data504[:,18]

#msf505 = data505[:,0]
#chisqu505 = data505[:,10] # total
#ma505 = data505[:,18]

#chisqu506 = data506[:,10] # total # for the minimal chisquare value

#chimin = min(chisqu1)
#chimax = max(chisqu1)
#print chimin,chimax
#chimin = min(chisqu2)
#chimax = max(chisqu2)
#print "chisqu2",chimin,chimax
chimin = min(chisqu3)
chimax = max(chisqu3)
print "chi3",chimin,chimax
#chimin = min(chisqu5)
#chimax = max(chisqu5)
#print chimin,chimax
chimin = min(chisqu7)
print "chi7",chimin
#chimin = min(chisqu10)
#print "chi10",chimin
chimin = min(chisqu30)
print "chi30",chimin
#chimin = min(chisqu50)
#print "chi50",chimin
chimin = min(chisqu50)
print "chi50",chimin
#chimin = min(chisqu502)
#print "chi502",chimin
#chimin = min(chisqu503)
#print "chi503",chimin
#chimin = min(chisqu504)
#print "chi504",chimin
#chimin = min(chisqu505)
#print "chi505",chimin

#chimin506 = min(chisqu506)
#print "chi506",chimin

chimin=1.3#0.63#0.2
sig95= 7.82
#slec1 = (chisqu1 <= sig95 +chimin+0.05) &(chisqu1 >= sig95 +chimin-0.00)
#slec2 = (chisqu2 <= sig95 +chimin+0.05) &(chisqu2 >= sig95 +chimin-0.00)

#slec5 = (chisqu5 <= sig95 +chimin+0.02) &(chisqu5 >= sig95 +chimin-0.00) 
slec7 = (chisqu7 <= sig95 +chimin+0.02) &(chisqu7 >= sig95 +chimin-0.02) 
#slec72 = (chisqu72 <= sig95 +chimin+0.02) &(chisqu72 >= sig95 +chimin-0.02) 
#slec10 = (chisqu10 <= sig95 +chimin+0.02) &(chisqu10 >= sig95 +chimin-0.02) 
#slec102 = (chisqu102 <= sig95 +chimin+0.02) &(chisqu102 >= sig95 +chimin-0.02) 
slec30 = (chisqu30 <= sig95 +chimin+0.03) &(chisqu30 >= sig95 +chimin-0.03) 
#slec302 = (chisqu302 <= sig95 +chimin+0.02) &(chisqu302 >= sig95 +chimin-0.02) #&(ma30 <=1100)&(msf30>=1200)
#slec50 = (chisqu50 <= sig95 +chimin+0.05) &(chisqu50 >= sig95 +chimin-0.25) 

#slec502 = (chisqu502 <= sig95 +chimin+0.05) &(chisqu502 >= sig95 +chimin-0.05)# &(ma502 >=500)
#slec503 = (chisqu503 <= sig95 +chimin+0.03) &(chisqu503 >= sig95 +chimin-0.03) 
#slec504 = (chisqu504 <= sig95 +chimin+0.2) &(chisqu504 >= sig95 +chimin-0.2) 
#slec505 = (chisqu505 <= sig95 +chimin+0.02) &(chisqu505 >= sig95 +chimin-0.02) 

fig = plt.figure(dpi=100)

slec3 = (chisqu3 <= sig95 +chimin+0.01) &(chisqu3 >= sig95 +chimin-0.01)#&(ma3<1900)
plt.plot(ma3[slec3], msf3[slec3], '-',color='black')

#slec3b = (chisqu3 <= sig95 +chimin+0.05) &(chisqu3 >= sig95 +chimin-0.05)&(ma3>1850)&(ma3<2030)
#plt.plot(ma3[slec3b], msf3[slec3b], '-',color='black')

#slec3c = (chisqu3 <= sig95 +chimin+0.04) &(chisqu3 >= sig95 +chimin-0.02)&(ma3>2000)
#plt.plot(ma3[slec3c], msf3[slec3c], '-',color='black')

text(2370,1720,r"$\tan \beta$=3",color='black',fontsize=14,rotation=342)
#plt.plot(ma5[slec5], msf5[slec5], '-')
#text(1750,1750,r"$\tan \beta$=5",color='blue',fontsize=14,rotation=320)
plt.plot(ma7[slec7], msf7[slec7], '-',color='green')
#plt.plot(ma72[slec72], msf72[slec72], '-',color='green')
text(2140,1425,r"$\tan \beta$=7",color='green',fontsize=14,rotation=327)
#plt.plot(ma10[slec10], msf10[slec10], '-',color='red',markersize=1)
#plt.plot(ma102[slec102], msf102[slec102], '-',color='red',markersize=1)
#text(1530,1530,r"$\tan \beta$=10",color='red',fontsize=14,rotation=320)
plt.plot(ma30[slec30], msf30[slec30], '-',color='c')
#plt.plot(ma302[slec302], msf302[slec302], '-',color='c')
text(1900,1300,r"$\tan \beta$=30",color='c',fontsize=14,rotation=330)
##plt.plot(ma50[slec50], msf50[slec50], '.',color='magenta',markersize=1)
slec50 = (chisqu50 <= sig95 +chimin+0.05) &(chisqu50 >= sig95 +chimin-0.05) &(msf50<1650)
plt.plot(ma50[slec50], msf50[slec50], '-',color='magenta')
slec50b = (chisqu50 <= sig95 +chimin+0.025) &(chisqu50 >= sig95 +chimin-0.025) &(msf50>1640)
plt.plot(ma50[slec50b], msf50[slec50b], '-',color='magenta')
#plt.plot(ma502[slec502], msf502[slec502], '.',color='magenta',markersize=1)
#plt.plot(ma503[slec503], msf503[slec503], '-',color='magenta',linewidth=1)
#plt.plot(ma504[slec504], msf504[slec504], '.',color='magenta',markersize=1)
#plt.plot(ma505[slec505], msf505[slec505], '.',color='magenta',markersize=1)
text(1680,1180,r"$\tan \beta$=50",color='magenta',fontsize=14,rotation=338)
xlabel(r"$M_A$ (GeV)",fontsize=22)
ylabel(r"$M_{SUSY}$ (GeV)",fontsize=22)
xlim(1000,3000)
ylim(700,3020)
title(r"$X_t=2 M_{\rm SUSY}$(maximal mixing)",fontsize=25)

plt.savefig("mamsf_xt2_fcctest.pdf",dpi=300)
plt.show()

