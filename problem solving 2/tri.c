char* triangleType(int* a, int n) {
    int c=a[0],d=a[1],e=a[2];
    if(c+d<=e || d+e<=c || c+e<=d){
        return "none";
    }
    if(c==d && d==e ){
        return "equilateral";
    }
    else if(c!=d && d!=e && c!=e){
        return "scalene";
    }
    else{
        return "isosceles";
    }
    
}