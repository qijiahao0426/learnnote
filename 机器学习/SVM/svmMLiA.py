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

#   简化版SMO算法
#   函数介绍：
#   mat():构造矩阵    transpose()和.T:矩阵转置    shape():查看矩阵纬度
#   multiply():数组和矩阵对应位置相乘，输出与相乘数组/矩阵的大小一致
def smoSimple(dataMatIn,classLabels,C,toler,maxIter):# 数据集，类别标签，常数C，容错率和退出前最大的循环次数
    dataMatrix=mat(dataMatIn);labelMat=mat(classLabels).transpose()# 转置是为了使标签和数据集矩阵一一对应
    b=0;m,n=shape(dataMatrix)# 通过shape得到维度
    alphas=mat(zeros((m,1)))
    iter=0 # iter存储在没有任何alpha改变情况下遍历数据集的次数，当它达到输入值MaxIter时，函数结束运行并退出
    while (iter<maxIter):
        alphaPairsChanged=0 #预设为0
        for i in range(m):# 对整个集合顺序遍历
            fXi=float(multiply(alphas,labelMat).T*\
                (dataMatrix*dataMatrix[i,:].T))+b #选择使用线性内核
            Ei=fXi-float(labelMat[i])# 误差Ei，如果误差很大，那么可以对该数据实例所对应的alpha值进行优化
            #在if语句中，不管是正间隔还是负间隔都会被测试。同时检查alpha值，以保证其不能等于0或C。由于后面alpha小于0或大于 
            #C时将被调整为0或C，所以一旦在该if语句中它们等于这两个值的话，那么它们就已经在“边界” 上了，因而不再能够减小或增大，因此也就不值得再对它们进行优化了。
            if((labelMat[i]*Ei<-toler) and (alphas[i]<C)) or\  
               ((labelMat[i]*Ei>toler) and\
                (alphas[i]>0)):
                j=selectJrand(i,m) #随机选择第二个alpha值,即alpha[j]
                # 可以采用第一个alpha值（alpha[i]）的误差计算方法，来计算这个alpha值的误差
                fXj=float(multiply(alphas,labelMat).T*\
                (dataMatrix*dataMatrix[j,:].T))+b 
                Ej=fXj-float(labelMat[j])
                alphaIold=alphas[i].copy();
                alphaJold=alphas[j].copy();
                # 保证alpha在0与C之间
                if(labelMat[i]!=labelMat[j]):
                    L=max(0,alphas[j]-alphas[i])
                    H=min(C,C+alphas[j]-alphas[i])
                else:
                    L=max(0,alphas[j]+alphas[i]-C)
                    H=min(C,alphas[j]+alphas[i])
                if L==H: print "L==H";continue
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                