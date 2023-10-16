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
[](a){1;2;3;4;};
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
[=](st,[struct]([](a){},
                [=](b),
               )
   );
```



#### namespace

```
[function_name](){
	// namespace function_name
}

namespace_xxx{
	// namespace namespace_xxx
}
```



#### recursion

```
[add](i){
	[if]([==](a,1)){
	    return [=](ret,1);
	}
	[else](){
		[=](a,i);
	    [-](a,1);
	    return [add](a);
	}
}
```



### Special functions

#### 1.[] or [int]

maybe array or list, get from [index]

```
c:
    int a[] = {1,2,3,4};
    a[0];// 1
she:
    [](a){1;2;3;4};
    [0](a);// 1
```



#### 2.[=]

```
[=](p1,p2): let p1 equal to p2
[=](p1): p1 means a var
c:
    int a;
    a = 1;
she:
    [=](a);
    [=](a,1);
```

#### 3.[struct]

```
build a Complex Data Structures
```

#### 4.[if] or [elseif] or [else]

branch function

#### 5.[while]

loop function
