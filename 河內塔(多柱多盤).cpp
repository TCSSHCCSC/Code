#include<stdio.h>

int main (void){
    int temp1,temp2,c,pl,lastp[3],count=0;
    printf("��J�W�l�ơB�L�l��(�W���W�l26�L�l100)\n");
    scanf("%d %d",&c,&pl);
    int k[c];
    char p[pl],temp3,temp4,lastc[3];
    for(temp2=1;temp2<=c;temp2++) k[temp2-1]=0;
    for(temp2=1;temp2<=pl;temp2++) p[temp2-1]='a';
    printf("1-->�W�l������\n2-->�L�l������\n3-->�C�X�W�l�W���L�l�s��\n4-->�M��L�l\n\n");
    do{ 
       for(temp1=1;temp1<=c;temp1++){
        for(temp2=1;temp2<=pl;temp2++){
         if('a'+temp1-1==p[temp2-1]){
          k[temp1-1]=temp2;
          temp2=pl+1;
          }
		  else k[temp1-1]=0;         
         }
        } 
       printf("��X�C�W�l�W�̰����L�l�s��(0��ܨS�F�F)\n");
       for(temp1=1;temp1<=c;temp1++)printf("%c-->%d\n",temp1-1+'a',k[temp1-1]); 
       printf("\n\n\n��J���O(1~4)");      
       scanf("%d",&temp1);
       switch (temp1){
        case 1:
				 printf("��J��W�s��\n");
				 scanf(" %c",&temp3);
				 scanf(" %c",&temp4);
				 if(k[temp3-'a']<k[temp4-'a']||k[temp4-'a']==0){
                  p[k[temp3-'a']-1]=temp4;
                  count++;
                  }                  
				 else printf("�W�l�W�ǩǪ�\n");
				 printf("�w���ʴX��%d\n",count); 
          		 break;
		case 2:
                 printf("��J�L�l�W�l�s��\n");
				 scanf("%d  %c",&temp1,&temp3);
                 if((temp1<k[temp3-'a']&&k[p[temp1-1]-'a']==temp1)||k[temp3-'a']==0){
                  p[temp1-1]=temp3;
                  count++;
                  }
                 else printf("�W�l�W�ǩǪ�\n");
                 printf("�w���ʴX��%d\n",count); 
				 break;
        case 3:
				 printf("��J�ĬW�l�s��");
				 scanf(" %c",&temp3);
				 for(temp1=1;temp1<=pl;temp1++)	if(temp3==p[temp1-1]) printf("%d\n",temp1);
				 printf("Are you ready? (��1)");
                 scanf("%d",&temp1);
				 break;
        case 4:
				 printf("��J�M�䪺�L�l�s���H\n");
				 scanf("%d",&temp1);
				 if(temp1<=pl) printf("�b%c�W\n",p[temp1-1]);
                 else printf("��....���o�ӽL�l��?\n");			 
				 printf("Are you ready? (��1)");
                 scanf("%d",&temp1);
				 break;
		default:
				 printf("�O�}�ڪ���\n�����A�ΤF��?(������4)(�_�h��5)");
				 scanf("%d",&temp1);
				 if(temp1==4) return 0;
				 break;
              }
     }while(1);
     return 0;
          }
                 
