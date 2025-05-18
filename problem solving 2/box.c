char* categorizeBox(int length, int width, int height, int mass) {
    int cont=0,c0=0;
    long long  vol=(long long)length*width*height;
    bool bul=(length>=10000 || width>=10000 || height>=10000 || vol>=1000000000);
    bool hea=(mass>=100);
    if(bul && hea){
        return "Both";
    }
    else if(bul){
        return "Bulky";
    }
    else if(hea){
        return "Heavy";

    }
    else 
    return "Neither";

}