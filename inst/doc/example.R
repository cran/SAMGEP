## ----setup---------------------------------------------------------------
library(SAMGEP)
library(pROC)

## ------------------------------------------------------------------------
samgep_result <- with(
  simdata, samgep(dat_train=trainSet, dat_test=testSet, Cindices=6:160, lambda=0.05, r=0.25,
                  alpha=0.5, V=embeddings, observed=unique(trainSet$ID)[1:50], nCores=1))

## ---- message=FALSE------------------------------------------------------
samgep_auc <- pROC::auc(simdata$testSet$Y, samgep_result$margMix)
print(paste('AUC:',round(samgep_auc,digits=3)))

