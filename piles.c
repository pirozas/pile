#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<unistd.h>

	float v,ip,ipx;

	char domain[50];

	float sp=20.040001;

int ex();

int main(int argc, char *argv[])

{

	system("clear");

	system("lsb_release -r >vs");

	system("awk '{ $1=\"\"; print substr($0,2) }' vs >v");

	FILE *pF=fopen("v","r");

	 			

		   		if(pF!=NULL){

		 	fscanf(pF,"%f",&v);

		 	

		printf("\033[1;33m\n[Cheking details...]\033[0m\n");

		sleep(1);

		 	

	 if(v==sp)

		 {

		 	

	 			printf("\033[1;33m<distro>:\033[0m ");

	 			

	 			printf("\033[1;34mubuntu 20.04\033[0m ");

	 			printf("\033[1;32mSupported[✓]\033[0m\n");

		 }else{

		 	printf("\033[1;31mUnsuported system!\033[0m\n");

		 	printf("\033[1;32mThis script runs in ubuntu 20.04 only\033[0m\n");

	//		return 0;

		 	

		 	

		 }

		 

	

		   		}

	sleep(1);	   		



system("clear ; rm piros.sh");

domain:

	printf("\033[1;32mEnter domain name pointing to your vps: \033[0m");

	scanf("%s",domain);

	system("curl -4 icanhazip.com >ips");

	system(" sed -i \"s/[^0-9]//g\" ips");

		FILE *pf=fopen("ips","r");

		fscanf(pf,"%f",&ip);

		

		 char buf[250];        

	snprintf(buf,250,"dig +short %s >ipr",domain);

	system(buf);

	

	system(" sed -i \"s/[^0-9]//g\" ipr");

		FILE *dm=fopen("ipr","r");

		fscanf(dm,"%f",&ipx);

	

		printf("\033[1;33m\n[Verifying domain...]\033[0m\n");

		sleep(1);

  if(ip==ipx)

  

{

    			printf("\033[1;32msuccess[✓]\033[0m\n");

}

	else{

		   					printf("\033[1;31mDomain not resolving to this vps!\033[0m\n");

		   		goto domain;

		   		}	   

		   		

char ssl[999];

snprintf(ssl,999,"sudo certbot certonly --standalone -d %s --non-interactive --agree-tos -m jamalisaac2000y@gmail.com",domain);		   		

	system(ssl);

	char st[999];

	snprintf(st,999,"mkdir -p /etc/stunnel && cd /etc/stunnel && sudo cp /etc/letsencrypt/live/%s/*.pem /etc/stunnel && openssl rsa -in privkey.pem -out private.key && cat cert.pem fullchain.pem > certificate.crt && cat chain.pem > ca_bundle.crt && cat private.key certificate.crt ca_bundle.crt >stunnel.pem && wget -q https://www.dropbox.com/s/sbk9hkgeb4741qd/stunnel.config?dl=0 && mv stunnel.config?dl=0 stunnel.config  && cd $HOME",domain);

	system(st);	   

system("wget https://raw.githubusercontent.com/Piroza1/vps/main/piros.sh ; chmod +x piros.sh ; ./piros.sh");

system("wget https://raw.githubusercontent.com/pirozas/clangs/main/menu.c ; gcc menu.c -o menu > /dev/null 2>&1");
system("mv menu /usr/bin/menu");

system("service dropbear restart");
system("clear");
system("cat /dev/null > ~/.bash_history && history -c ; history -w");

	printf("\033[1;33m\nScript executed successfully ✓\033[0m\n");


	

	printf("\033[1;32m\n**********************************\033[0m");
	
  printf("\033[1;32m\n*\033[0m");
   printf("\033[1;37m\tEnter menu for options\033[0m");
  printf("\033[1;32m   *\033[0m");
  
  
  
  printf("\033[1;32m\n*\033[0m");
   printf("\033[1;34m\tTelegram:\033[0m");
   printf("\033[1;32m@piroza1\033[0m");
   
  printf("\033[1;32m        *\033[0m\n");
  
  
     
      
      printf("\033[1;32m**********************************\033[0m\n");

						   					   		

		   		

		   		

return 0;		   		

}
