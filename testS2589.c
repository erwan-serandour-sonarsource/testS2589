
void foo(bool c, bool b){
  if (c || (!c && b)){
    doSomething();
  }
}
