
#define SET_BIT(VAR,BIT_NUM) do{ int x=VAR|(1<<BIT_NUM); printf("%d",x);}while(0)
#define CLR_BIT(VAR,BIT_NUM) do{ int x=(VAR)& (!(1<<BIT_NUM)); printf("%d",x);}while(0)
#define GET_BIT(VAR,BIT_NUM) do{ int x=(VAR>>BIT_NUM)&1 ; printf("%d",x);}while(0)
#define TOG_BIT(VAR,BIT_NUM) do{ int x=VAR^(1<<BIT_NUM); printf("%d",x);}while(0)

