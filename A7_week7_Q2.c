#include <stdio.h>
#include <stdlib.h>

struct node{
    int id;
    int priority;
    struct node *next;
};

struct node * create_node(int id, int val){
    struct node * e = (struct node*)malloc(sizeof(struct node));
    e->id = id;
    e->priority = val;
    e->next = NULL;
    return e;
}

struct node * append(struct node * list, struct node * e){
    e->next = list;
    return e;
}

struct node * search(struct node * list, int id){
    struct node * temp = list;
    while(temp!=NULL){
        if(temp->id==id){
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void change_priority(struct node *list, struct node* e, int val){
    if(e == NULL) return;
    e->priority = val;
    struct node* p = list;
    while(p->next != e && p->next != NULL) {
        p = p->next;
    }
    if (p->next != NULL) {
        p->next = e->next;
        while (p->next != NULL && p->next->priority > val) {
            p = p->next;
        }
        e->next = p->next;
        p->next = e;
    }
}

int main(){
    struct node * list = NULL;
    char c;
    int id, val;
    struct node * e;
    struct node * search_result;
    while(1){
        scanf("%c",&c);
        if(c=='A'){
            scanf("%d %d",&id,&val);
            e = create_node(id,val);
            list = append(list,e);
        }
        else if(c=='C'){
            scanf("%d %d",&id,&val);
            change_priority(list, search(list, id), val);
        }
        else if(c=='S'){
            scanf("%d",&id);
            search_result = search(list,id);
            if(search_result==NULL){
                printf("%d -1\n",id);
            }
            else{
                printf("%d %d\n",search_result->id,search_result->priority);
            }
        }
        else if(c=='E'){
            break;
        }
        else{
            //do nothing
        }
        scanf("%*c");
    }
    return 0;
}