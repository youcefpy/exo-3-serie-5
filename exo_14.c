// Online C compiler to run C program online
#include <stdio.h>


int main() {
    
    int a[50][50],v[50],n,m,b[50],p;
    p=0;
    printf("donnez le nombre des ligne de la matrice: ");
    scanf("%d",&n);
    printf("donnez le nombre des colonne de la matrice: ");
    scanf("%d",&m);
    
    printf("remplissage de la matrice : \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nremlissage du vecteur : ");
    for(int i=0;i<m;i++){
        printf("v[%d]: ",i);
        scanf("%d",&v[i]);
    }
    
    for(int i =0;i<n;i++){
      p=0;
        for(int j=0;j<m;j++){
            p = p+ (a[i][j]*v[j]);
        }
        b[i]=p;
    }
    printf("matrice a: \n");
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",a[i][j]);
            
        }
        printf("\n");
    }
    
    printf("vecteur v : \n");
    for(int i =0;i<m;i++){
        printf("%d\t",v[i]);
    }
    printf("\n produit vecteur matrice : ");

    for(int i =0;i<n;i++){
        printf("%d\t",b[i]);
    }
    return 0;
}
