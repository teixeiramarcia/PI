#include <stdio.h>

//1
int maior (){
    int i, bigger;
    scanf ("%d", &i);
    bigger = i;
    while (i!=0){
        if(i>bigger)
        bigger = i;
        scanf("%d", &i);
    }
    printf("%d", bigger);
    return 0;
}

//2
int media (){
    int i, soma, n;
    float media;
    scanf("%d", &i);
    soma=0;
    n=0;
    while(i!=0){
        soma=soma+i;
        scanf("%d", &i);
        n++;
    }
    media =soma/n; 
    printf("%.2f", media);
    return 0;
}

//3
int segundomaior (){
    int i, maior, segundomaior;
    
    scanf("%d", &i);
    maior=i;

    while(i!=0){
        scanf("%d", &i);
        if (i> maior){
            segundomaior=maior;
            maior=i;
        }
        else if (i > segundomaior){
            segundomaior = i;
        } 
    }
    printf("%d", segundomaior);
    return 0;
}

//4
int bitsUm (unsigned int n){
    int total=0;
    
    while(n!=0) {
        if(n%2==1) {
            total++;
            n=n/2;
        } else {
            n=n/2;
        }
    }
    return total;
}

//5
int trailingZ (unsigned int n){
    int total=0;
    while(n%2==0){
        total++;
        n/=2;
    }
    return total;
}

//6
int qDig (unsigned int n){
    int total=0;
    while((n/10)!=0){
        total++;
        n/=10;
    }
    return total;
}

//7
char *mystrcat (char s1[], char s2[]){
    int i, j;
    for(i=0; s1[i]; i++);
    for(j=0; s2[j]; j++){
        s1[i+j] = s2[j];
    }
    s1[i+j]='\0';
    return s1;
}

//8
char *strcpy (char *dest, char source[]){
    int i;
    for(i=0; source[i]; i++){
        dest[i]=source[i];
    }
    dest[i]='\0';
    return dest;
}

//9
 int strcmp (char s1[], char s2[]){
    int i = 0;
    while(s1[i] == s2[i] && s1[i]){
        i++;
    }
    return (s1[i] - s2[i]);
 }

 //10
char *mystrstr (char s1[], char s2[]) {
    int i, j;
    for(i=0,j=0; s1[i] && s2[j]; i++)
    if (s1[i]==s2[j]) j++;
    else j=0;

    if (s2[j]=='\0') return (s1+=(i-j));
    else return NULL;
}

//11
 void strrev (char s[]){
    int size, j, m=0;
    for(size=0; s[size]; size++);
    char inversa[size];
    for(j=size-1; j>=0; j--){
        inversa[m]=s[j];
        m++;
    }
    inversa[m]='\0';
    strcpy (s,inversa);
}
//ou better
void strrev(char s){
    int i, j;
    for(i = 0; j = strlen(s) - 1; i < j; i++, j--){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

//12
void strnoV (char s[]){
    int j, i=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            for(j=i; s[j]; j++){
                s[j]=s[j+1];
            }
        }
        else i++;
    }
    s[i]='\0';
}

//13
void truncW (char t[], int n){
    int r,w, letras=n;

    for(r=0, w=0; t[r]; r++){
        if(letras!=0 && t[r]!=' '){
            t[w]=t[r];
            w++;
            letras--;
        }
        else if(t[r]==' '){
            t[w]=' ';
            letras=n;
            w++;
        }
    }
    t[w]='\0';
}

//14
char charMaisfreq (char s[]){
    char maisfreq;
    int freq=0, i, j, contador;
    for(i=0; s[i]; i++){
        contador=0;
        for(j=0; s[j]; j++)
            if(s[j]==s[i])
                contador ++;
        if(contador>freq){
            freq=contador;
            maisfreq=s[i];
        }
    }
    return maisfreq;
}

//15
int iguaisConsecutivos (char s[]){
    int i=0, contador=1, maior=0;
    while(s[i]){
        if(s[i]==s[i+1]){
            contador++;
        }
        else if(contador>maior){
                maior=contador;
                contador=1;
            }
            i++;
    }
    return maior;
}

//16
int difConsecutivos (char s[]){
    int i=0, contador=1, maior=0;
    while(s[i]){
        if(s[i]!=s[i+1]){
            contador ++;
        }
        else {
            if(contador>maior){
            maior=contador;
            }
            contador=1;
        }
        i++;
    }
    return maior;
}

//17
int maiorPrefixo (char s1[], char s2[]){
    int i=0;
    while(s1[i] && s2[i] && s1[i]==s2[i]){
        i++;
    }
    return i;
}

//18
int maiorSufixo (char s1 [], char s2 []){
    int i, j, res=0;
    int a = strlen(s1)-1;
    int b = strlen(s2)-1;
    for(i=a, j=b; i>=0 && j>=0; i--, j--)
        if(s1[i]==s2[j])
            res++;
        else return res;
    return res;
}

//19
int sufPref (char s1[], char s2[]){
    int i, j=0, res=0;
    for(i=0; s1[i]; i++){
        if(s1[i]==s2[j]){
            j++;
            res++;
        } else{
            j=0; res=0;
        }
    }
    return res;
}

//20
int contaPal (char s[]){
    int i, palavras=0;
    for(i=0; s[i]; i++)
        if((s[i]!=' ' && s[i]!='\n') && (s[i+1]==' ' || s[i+1]=='\0'))
            palavras++;
    return palavras;
}

//21
int contaVogais (char s[]){
    int i, vogais=0;
    for(i=0; s[i]; i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
            vogais ++;
    }
    return vogais;
}

//22
int contida (char a[], char b[]){
    int i=0, j=0;
    while(a[i]){
        if(b[j]=='\0')
            return 0;
        if(a[i]==b[j]){
            i++;
            j=0;
        }
        else j++;
    }
    return 1;
}

//23
int palindorome (char s[]){
    int i, j;
    int a = strlen(s)-1;
    for(i=0, j=a; i<j; i++, j--)
        if(s[i]!=s[j]) return 0;
    return 1;
}

//24
int remRep (char x[]){
    int i, w;
    if(x[0]){
        for(i=1, w=1; x[i]; i++)
            if(x[i-1]!=x[i]){
                x[w]=x[i];
                w++;
            }
        x[w]='\0';
    }
    return w;
}

//25
int limpaEspacos (char t[]){
    int r, w;
    if(t[0]){
        for(r=1, w=1; t[r]; r++)
            if(t[r]==' ' && t[w-1]==' ');
            else{
                t[w]=t[r];
                w++;
            }
        t[w]='\0';
    }
    return w;
}

//26
void insere (int v[], int N, int x){
    int i=N; int stop=1;
    while(i>0 && stop = 1){
        if(x>=v[i-1]){
            stop=0;
        } else {
            v[ı]=v[i-1];
            i--;
        }
        v[i]=x;
    }
}

//27
void merge (int r[], int a[], int b[], int na, int nb){
    int i, j, k;
    j=k=0;

    for(i=0; j<na && k<nb; i++){
        if(a[j]<=b[k]){
            r[i]=a[j++];
        } else {r[i]=b[k++];}
    }
    while(j<na) r[i++]=a[j++];
    while(k<nb) r[i++]=b[k++];
}

//28
int crescente (int a[], int i, int j){
    int b;
    for(b=i; b<j; b++){
        if(a[b]>a[b+1] && b+1<j){
            return 0;
        }
    }
    return 1;
}

//29
int retiraNeg (int v[], int N){
    int i, j, restantes=N;
    for(i=0, j=0; i<N; i++){
        if(v[i]>=0){
            v[j]=v[i];
            j++;
        } else restantes--;
    }
    return restantes;
}

//30
int menosFreq (int v[], int N){
    int i, ultimo=v[0], qt=1, menosfreq=v[0], freq=9999;
    for(i=1; i<=N; i++)
        if(v[i]==ultimo){
            qt++;
        } else if (qt<freq){
            menosfreq=v[i-1];
            freq=qt;
            ultimo=v[i];
            qt=1;
            } else if (ultimo !=v[i]){
                ultimo=v[i];
                qt=1;
            }
    return menosfreq;
    
}

//31
int maisFreq (int v[], int N){
    int i, last=v[0], qt=1, maisfreq=v[0], freq=1;
    for(i=1; i<N; i++)
        if(v[i]==ultimo){
            qt++;
        } else if(qt>freq){
            maisfreq=v[i-1];
            freq=qt;
            ultimo=v[i];
            qt=1;
        } else if (v[i]!= ultimo){
            last = v[i];
            qt=1;
        }
    return maisfreq;
}

//32
int maxCresc (int v[], int N){
    int i, lastseq=1, maiscresc=0;
    for(i=0; i<N; i++){
        if(v[i]<=v[i+1]){
            lastseq++;
        } else {
            if(lastseq>maiscresc)
                maiscresc=lastseq;
                lastseq=1;
        }
    }
    return maiscresc;
}

//33

//34
int elimRepOrd (int v[], int n){
    int i, j=1;
    for(i=1; i<n; i++){
        if(v[i]==v[j-1]);
        else {
            v[j]=v[i];
            j++;
        }
    }
    return j;
}

//35
int comunsOrd (int a[], int na, int b[], int nb){
    int rep=0, ia=0, ib=0;
    while(ia<na && ib<nb){
        if(a[ia]>b[ib]) ib++;
        if(a[ia]<b[ib]) ia++;
        if(a[ia]==b[ib]){
            ia++; ib++;
            rep++;
        }
    }
    return rep;
}

//36

//37
int minInd (int v[], int n){
    int i, minI=0;
    for(i=1;i<n; i++){
        if(v[minI]>v[i])
            minI=i;
    }
    return minI;
}

//38
void somasAc (int v[], int Ac [], int N){
    int i, sum=0;
    for(i=0; i<N; i++){
        sum+=v[i];
        Ac[i]=sum;
    }
}

//39
int triSup (int N, float m [N][N]){
    int i, j, r=1;
    for(i=0;l<N; i++){
        for(j=0; j<i; j++)
            if(m[i][j]!=0) r=0;
    }
    return r;
}

//40
void transposta (int N, float m [N][N]){
    int l, c, temp;
    for(l=0; l<N; l++)
        for(c=0; c<l; c++){
            temp= m[c][l];
            m[c][l]=m[l][c];
            m[l][c]=temp;
        }
}

//41
void addTo (int N, int M, int a [N][M], int b[N][M]){
    int i, j;
    if (N==M){
        for(i=0;i<N; i++)
            for(j=0; j<N; j++)
                a[i][j] += b[i][j];
    }
}

//42
int unionSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N; i++){
        r[i]=(v1[i] || v2[i])
    }
    return 0;
}

//43
int intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N; i++){
        r[i]=(v1[i] && v2[i]);
    }
    return 0;
}

//44
int intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N; i++){
        if(v1[i]<=v2[i])
            r[i]=v1[i];
        else r[i]=v2[i];
    }
    return 0;
}

//45
int unionMSet (int N, int v1[N], int v2[N], int r[N]){
    int i;
    for(i=0; i<N; i++){
        if(v1[i]<=v2[i])
            r[i]=v2[i];
        else r[i]=v1[i];
    }
    return 0;
}

//46
int cardinalMSet (int N, int v[N]){
    int i, sum=0;
    for(i=0; i<N; i++){
        sum + = v[i];
    }
    return sum;
}

//47
typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
    int x, y;
} Posicao;

Posicao posFinal (Posicao inicial, Movimento mov[], int N) {
    int i;
    for(i=0; i<N; i++)
        switch (mov[i]){
            case Norte:
                inicial.y++;
                break;
            case Sul:
                inicial.y--;
                break;
            case Este:
                inicial.x++;
                break;
            case Oeste:
                inicial.x--;
                break;
        }
        return inicial;
}

//48
int iguais (Posicao p1, Posicao p2){
    return(p1.x==p2.x) && (p1.y==p2.y);
}

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i, r;
    i=r=0;

    while (!iguais(inicial, final) && r>-1){
        if(i==N) r=-1;
        else if (inicial.x < final.x){
            mov[i]= Este;
            inicial.x++;
        } else if (inicial.x > final.x){
            mov[i] = Oeste;
            inicial.x--;
        } else if (inicial.y < final.y){
            mov[i]= Norte;
            inicial.y++;
        } else if (inicial.y > final.y){
            mov[i] = Sul;
            inicial.y--;
        }
        i++;
    }
    if(!r) r=i;
    return r;
}

//49 nop
int distPonto (Posicao p){
    return p.x*p.x+p.y*p.y;
}
int maisCentral (Posicao pos[], int N){
    int i;
    int menorDist= distPonto(pos[0]);
    int imenor= 0;
    for(i=1; i<N; i++){
        if(distPonto(pos[i])<menorDist){
            menorDist= distPonto(pos[i]);
            imenor= i;
        }
    }
    return imenor;
}

//50
int evizinho (Posicao posit, Posicao p2){
    if ((p2.x==posit.x-1 && p2.y==posit.y) ||
        (p2.x==posit.x && p2.y==posit.y+1) ||
        (p2.x==posit.x && p2.y==posit.y-1) ||
        (p2.x==posit.x+1 && p2.y==posit.y)) return 1;
    else return 0;
}
int vizinhos (Posicao p, Posicao pos[], int N){
    int vizinhos=0, i;
    for(i=0; i<N; i++)
        if(evizinho(p, pos[i])) vizinhos++;
    return vizinhos;
}

//por fazer: 33, 36
