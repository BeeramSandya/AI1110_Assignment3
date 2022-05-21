# a = Pr(W1)=0.6;
# b = Pr(R2/W1)=0.5;
# c = Pr(W1R2);
# Pr(W1R2)=Pr(R2/W1)*Pr(W1)

a = 0.6
b = 0.5
c = a*b

print("Pr(W1R2) = "+str(c))
