#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};

void create(struct stack *st)
{
    printf("Enter size:- ");
    scanf("%d", &st->size);
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
}

void display(struct stack st)
{
    int i;
    for (i = st.top; i >= 0; i--)
{
        printf("%d ", st.s[i]);
}
}

void push(struct stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        printf("stack overflow");
    }
    st->top++;
    st->s[st->top] = x;
}

int main()
{
    struct stack st;
    create(&st);
    push(&st, 7);
    display(st);
}