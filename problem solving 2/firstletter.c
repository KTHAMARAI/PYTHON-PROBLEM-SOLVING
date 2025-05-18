char repeatedCharacter(char* s) {
    int f[26]={0};
    for(int i=0;s[i]!='\0';i++){
        f[s[i]-'a']++;
        if(f[s[i]-'a']==2){
            return s[i];
        }
    }
    return '\0';
}