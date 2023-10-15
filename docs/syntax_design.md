#### define var

```
[=](a,1)
[=](a,1.0)
```



#### function

```
# define function
[add](p1,p2,p3){
	[=](ret,[+](p1,p2,p3));
	return ret;
}

# call function
[=](p1,1);
[=](p2,2);
[=](p3,3);
[add](p1,p2,p3);
```



#### Branches and loops

```
# branches
# tips:
# [if]是一个函数，如果返回为true就会执行{}内的指令,并且忽略后续的[elseif](...)和[else]()函数直到遇见下一个[if]或者是遇到else(){}之后开始执行后续的命令
[if]([>](a,4)) {

}
[elseif]([<](a,4)) {

}
[else]() {

}

# loop
# while会反复执行{}，直到入参函数的返回值为false
[while]([>](a,4)) {

}
```



#### lambda

```
# a->10
[=](a,[](){
  [=](ret,10);
  return ret;
});
```



#### Complex Data Structures

```
# array 
[](a){
	1;
	2;
	3;
	4;
};
# get array-a first, and b=1
[=](b, [0](a));
# loop for array
[=](index,0)
[while]([=]([index](a), NULL)) {
    # print: [index](a)
}

# empty array
[](a){};

# list
[](a){
    1;
    [add](p1,p2);
    [=](b)
}


[struct]([](a){},
         [=](b),
         );
```

