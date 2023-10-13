example

```
[define](p1 p2 ......);
```

define and var

```
# let a = 3
[define](a 3);
# let a = b
[=](a b)
```

function define

```
{[add](a b)
	[=](a 3);
	[=](b 7);
	return [+](a b);
}
```

function call

```
# return 10
[add](5 10);
```



jump

```
[=](a 1)
[if](a [>](a 5))
	;
	;
[elseif](a [<](a 5))

```

