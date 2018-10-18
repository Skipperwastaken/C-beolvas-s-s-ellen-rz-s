template <class T>
void beolvas(T &x) {
    bool hiba;
    do{
        cin >> x;
        hiba = cin.fail() || (cin.peek()!='\n' && cin.peek()!=' ');
        if(hiba){
            cout << "Nem megfelelo erteket adtal meg." << endl;
            cin.ignore(1000,'\n');
        } 
        cin.clear();
        if(cin.peek()=='\n') cin.ignore(1000,'\n');
    }while(hiba);
}
template <class T , class N>
void beolvas(T &x, N min) {
    bool hiba;
    do{
        cin >> x;
        hiba = cin.fail() || (cin.peek()!='\n' && cin.peek()!=' ') || min > x;
        if(hiba){
            cout << "Nem megfelelo erteket adtal meg." << endl;
            cin.ignore(1000,'\n');
        } 
        cin.clear();
        if(cin.peek()=='\n') cin.ignore(1000,'\n');
    }while(hiba);
}
template <class T, class N, class X>
void beolvas(T &x, N min, X max) {
    bool hiba;
    do{
        cin >> x;
        hiba = cin.fail() || (cin.peek()!='\n' && cin.peek()!=' ') || min > x || max < x;
        if(hiba){
            cout << "Nem megfelelo erteket adtal meg." << endl;
            cin.ignore(1000,'\n');
        } 
        cin.clear();
        if(cin.peek()=='\n') cin.ignore(1000,'\n');
    }while(hiba);
}