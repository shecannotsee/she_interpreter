## lambda calculus

#### base

In lambda calculus, there are only variables, function definitions, and function applications.

**variables**: value-example[ x ]

**function definitions**: example[ f(x).L ]

**function applications**: example[ f(N) ], N means parameter

tips: You can write f as λ, but I'm not sure if Xλcan display correctly, after all, it's not in ASCII table

**loop**=λf.(λx.f (x x)) (λx.f (x x))



## she-language

### atomic function

Atomic functions mean that the **interpreter provides implementation directly** and **cannot be customized by the user**.



#### type

If no type is defined, it will be automatically derived

```
# all type
# true      false
# int_8     uint_8
# int_16    uint_16
# int_32    uint_32
# int_64    uint_64
# float32   float64
# char

# define type
[type](p1;int);
```



#### operator

```
# Calculation operator
[+](1;2); # return 3
[-](5;2); # return 3
[*](2;5); # return 10
[/](4;2); # return 2
[=](i;0); # int_8 i=0
[+](i;3); # i changed to 3
[-](i;1); # i changed to 2
[*](i;4); # i changed to 8
[/](i;4); # i changed to 2

# comparison operator
[==](true;true;); # return true
[==](true;true;); # return true

[>](param_1;param_2);
[>=](param_1;param_2);
[<](param_1;param_2);
[<=](param_1;param_2);
```



#### branch

define

```
# run branch when pN means true
[if](conditional_1;[if-branch]();
     conditional_2;[elseif-branch-1]();
     conditional_3;[elseif-branch-2]();
     conditional_n;[else-branch]();
     );
# if equal to switch
[switch](conditional_1;[branch-1]();
         conditional_2;[branch-2]();
         conditional_3;[branch-3]();
         conditional_n;[branch-n]();
        );
```

example

```
[if](true;[](){}; # run this function
     true;[](){}; # not run this function
     true;[](){}; # not run this function
    );
[if](false;[](){}; # not run this function
     false;[](){}; # not run this function
     false;[](){}; # not run this function
    );
    
[switch](true;[](){}; # run this function
         true;[](){}; # not run this function
         true;[](){}; # not run this function
        );
[switch](false;[](){}; # not run this function
         false;[](){}; # not run this function
         false;[](){}; # not run this function
        );
```





#### loop

define

```
# when conditional is true,run the body.Until p1 turn to false
[while](conditional;[body](););
```

example

```
# like c:
# bool flag = true;
# int sum = 0;
# while(flag) {
#   sum = sum + 1;
#   if (sum==10) {
#     flag = false;// to break
#   }
# }
[=](p1;true);
[=](sum;0);
[while](p1;[](){
  [+](sum;1);
  [if]([==](sum;10);[](){[=](p1;false)};);
});
```



#### array and get array element

maybe array or list, get from [index]

```
# c:
#     int a[] = {1,2,3,4};
#     a[0];// 1
# she:
[](a;4){1;2;3;4};
[](a){1;2;3;4};
[=](index_0_from_a;[0](a););

# easy str
[]([type](a;char;);10;){};
```



#### struct

```
# define
[struct](class;     # struct name
         [=](number,0);   # class number
         []([type](a;char;);10;){}; # classmate name
        );


# use
[=](my_class;class);
[.](my_calss;number);
[.](my_calss;[0](name));
```



### Basic usage

#### value

define

```
# return number
1;
# return float
1.1;
# return string
"";
```

example

```
# int_8 i8 = 0;
[=](i8;0);
# uint_64 ui64 = 0;
[=]([type](i64;uint_64);0);
```



#### function

```
# define function
[add](p1;p2;p3;){
	return [=](ret;[+](p1;p2;p3;););
};

# call function
[=](p1;1);
[=](p2;2);
[=](p3;3);
[add](p1,p2,p3); # return 6
```



#### lambda

Anonymous lambda always executes directly

```
# define
[must null](must null){
}

# example
# a->10
[=](a;[](){
  return[=](ret;10);
};);
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



#### Like C include

```

```



### 
