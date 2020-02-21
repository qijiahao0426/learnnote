from numpy import *
from matplotlib import *

def loadDataSet(fileName):
    dataMat=[];labelMat=[]
    fr=open(fileName)
    for line in fr.readlines():
        lineArr=line.strip().split('\t')
        dataMat.append([float(lineArr[0]),float(lineArr[1])])
        labelMat.append(float(lineArr[2]))
    return dataMat,labelMat

#   i是第一个alpha的下标，m是所有alpha的数目
#   只要函数值不等于输入值，函数就会进行随机选择
def selectJrand(i,m):
    j=i
    while(j==i):
        j=int(random.uniform(0,m)) # 产生0 - m的随机浮点数 
    return j
    
#   用来调整大于H或小于L的alpha值
def clipAlpha(aj,H,L):
    if aj>H:
        aj=H
    if L>aj:
        aj=L 
    return aj