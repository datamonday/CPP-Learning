/*
��д����XMLtoTXT�Զ���XML�ļ�email.xmlת��Ϊ�ı��ļ�email.txt��

�����и�ʽ��XMLtoTXT email.xml email.txt��
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//��������ȥ���ַ�����β�Ŀո��Ʊ���ͻس������з��ȿհ׷���
void trim(char *strIn, char *strOut){
    char *start, *end, *temp;//����ȥ���ո���ַ�����ͷβָ��ͱ���ָ��
    temp = strIn;
    while (*temp == ' ' || *temp == '\n' || *temp == '\t' || *temp == '\r'){
        ++temp;
    }
    start = temp; //���ͷָ��
    temp = strIn + strlen(strIn) - 1; //�õ�ԭ�ַ������һ���ַ���ָ��(����'\0')
    printf("%c\n", *temp);
    while (*temp == ' ' || *temp == '\n' || *temp == '\t' || *temp == '\r'){
        --temp;
    }
    end = temp; //���βָ��
    for(strIn = start; strIn <= end; ){
        *strOut++ = *strIn++;
    }
    *strOut = '\0';
}
//�ַ����и����src���Ϊ��ֹ��sub�Ӵ��״γ���֮ǰ������
void strsplit(char *src , char *sub){
    char *ptr;
    ptr = strstr(src,sub);
    *ptr = '\0';
}

int main(int argc, char const *argv[])
{
    FILE *fp1,*fp2;
    char buf[1024]={0},res[1024],*sp=NULL;
    fp1 = fopen(argv[1],"r");
    fp2 = fopen(argv[2],"w");
    while(!feof(fp1))
    {
        fgets(buf,sizeof(buf),fp1); //���ζ�ȡһ��
        trim(buf,res);
        if(strcmp(res,"<from>")==0){     //�ҹؼ���<from>
            memset(buf,0,sizeof(buf));
            memset(res,0,sizeof(res));
            fgets(buf,sizeof(buf),fp1);
            trim(buf,res);              //ȥ�ո�
            strsplit(res,"</address>"); //ȥĩβ
            sp = strstr(res,"<address>");
               sp += strlen("<address>");    //spָ��������Ҫ������
               fprintf(fp2,"from: %s\n",sp); //����Ŀ���ʽд���ļ�
               memset(buf,0,sizeof(buf));
            memset(res,0,sizeof(res));
               continue;
        }
        if(strcmp(res,"<to>")==0){      //�ҹؼ���<to>
            memset(buf,0,sizeof(buf));
            memset(res,0,sizeof(res));
            fgets(buf,sizeof(buf),fp1);
            trim(buf,res);                //ȥ�ո�
            strsplit(res,"</address>"); //ȥĩβ
            sp = strstr(res,"<address>");
               sp += strlen("<address>");  //spָ��������Ҫ������
               fprintf(fp2,"to: %s\n",sp); //����Ŀ���ʽд���ļ�
               memset(buf,0,sizeof(buf));
            memset(res,0,sizeof(res));
               continue;
        }
        if(sp=strstr(res,"</subject>")){     //�ҹؼ���</subject>
            *sp = '\0';                       //ȥĩβ
            sp = res + strlen("<subject>"); //spָ��������Ҫ������
            fprintf(fp2,"subject: %s\n",sp);//����Ŀ���ʽд���ļ�
            continue;
        }
        if(sp=strstr(res,"</body>")){    //�ҹؼ���</body>
            *sp = '\0';                     //ȥĩβ
            sp = res + strlen("<body>"); //spָ��������Ҫ������
            fprintf(fp2,"body: %s\n",sp); //����Ŀ���ʽд���ļ�
            break;
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}
