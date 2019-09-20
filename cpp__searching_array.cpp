#include<iostream>

using namespace std;

void Sequential(int data[], int n, int cari, int index);
void Binary(int data[], int n, int cari, int index);

main() {
    char 
        pilihan
    ;

    int
        pilih,
        nilai,
        i,
        n,
        cari,
        index,
        data[100]
    ;

    bool 
        bolean = false
    ;

    menu:
    system("cls");

    cout<<"Pilih Menu : \n";
    cout<<"1. Squential Serching \n";
    cout<<"2. Binnary Searching \n";
    cout<<"3. exit \n"; cout<<endl;

    cout<<"Pilih : "; cin>>pilih;

    if(pilih == 1) {

        cout<<"1. Squential Serching \n"; cout<<endl;

        cout<<"Masukan jumlah nilai : "; cin>>n;
        for(i=1; i<=n; i++) {
            cout<<"Masukan nilai "<<i<<": "; cin>>data[i];
        }

        cout<<endl;
        cout<<"Nilai Array : \n"; 
        for(i=1; i<=n; i++) {
            cout<<i-1<<" = "<<data[i]<<". ";
        }

        cout<<endl;
        cout<<"Masukan data yang dicari : "; cin>>cari;
        Sequential(data, n, cari, index);

    }else if(pilih ==2) {
        cout<<"2. Binnary Searching \n"; cout<<endl;

        cout<<"Masukan jumlah nilai : "; cin>>n;
        
        for(i=0; i<n; i++) {
            cout<<"Masukan nilai "<<i+1<<": "; cin>>data[i];
            data[n] = data[i];
        }

        cout<<endl;
        cout<<"Nilai Array : \n"; 
        for(i=0; i<n; i++) {
            cout<<i<<" = "<<data[i]<<". ";
        }

        cout<<endl;
        cout<<"Masukan data yang dicari : "; cin>>cari;
        Binary(data, n, cari, index);
        // if(index!=-1) {
        //     cout<<"Data yang dicari berada pada index "<<index<<endl;  
        // }else{
        //     cout<<"Data yang dicari tidak ada dalam array"<<endl;
        // }
    }else if(pilih == 3) {
        exit(0);
    }else{
        cout<<"tidak ada \n";
        cout<<"Apakah ingin kembali ke menu: [Y/T] \n"; cin>>pilihan;

        if(pilihan == 'Y') {
            goto menu;
        }else{
            exit(0);
        }
    }
}

void Sequential(int data[], int n, int cari, int index) {
    int i;
    bool bolean;

    for(i=1; i<=n; i++) {
        if(cari == data[i]) {
            index = i-1;
            bolean = true;
        }
    }

    if(bolean) {
        cout<<"Data yang dicari berada pada index "<<index<<endl;   
    }else{
        cout<<"Data yang dicari tidak ada dalam array"<<endl;
    }
}

void Binary(int data[], int n, int cari, int index) {
    bool 
        bolean
    ;
    int 
        top = n-1,
        bottom = 0,
        mid
    ;

    while(bottom<=top && !bolean)
    {
        mid=(top+bottom)/2;
        if(data[mid]==cari){
            bolean=true;
        }else if(data[mid]<cari){
            top=mid-1;
        }else{
            bottom=mid+1;
        }
    }

    if(bolean) {
        cout<<mid;
    }else{
        cout<<"p";
    }
}