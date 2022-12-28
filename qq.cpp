#include <stdio.h>
#include <stdlib.h>
 
void ig(){
	printf("IYI GUNLER DILERIZ\n");
}
 
 
 
int main() {
	int tus=0;
	int adr=0;
	int adres=0;
	int otb=0;
	char kullaniciadi[20];
	int parola=4545;
	int yeniparola;

	
	printf("Kullanici adinizi giriniz\n");
	scanf("%s",&kullaniciadi);
	printf("Kullanici adiniz: %s \n" ,kullaniciadi);
	printf("Parolanizi giriniz(Numara ile)\n");
	scanf("%d",&parola);
	switch(parola){
		case 4545:
			printf("Parola dogru\n");
				break;

	default:
		printf("yanlis parola\n");
		printf("Parolanizi degistirmek icin yeni kod giriniz\n");
		scanf("%d",&yeniparola);
		printf("Yeni parolaniz %d\n",yeniparola);
	}
		
		FILE*dosya;
		dosya=fopen("D:\\Dev-Cpp\\Projeler\\bilgi.txt","w");
		fputs(kullaniciadi,dosya);
	
	printf("---------------Secenekler Menusu---------------\n Taksi Cagirmak icin: 1 \n Otobus menusu icin: 2 \n Gezilecebilecek yerler icin:3 \n Ulasim Icin:4 \n Cikis icin 'Exit' \n \n:");                   
	scanf("%d",&tus);
	
		if (tus==1)
			{		
					printf("Taksi secenegini tusladiniz\n Devam etmek icin 1'e basin Cikmak icin 'Exit' yazin \n \n:");
					scanf("%d",&adr);
						
						if (adr==1)
							{
					printf("Taksi icin Adres yazin veya bulundugunuz bolgeyi tarif edin \n");
					scanf ("%d",adres);
					printf("Konum Bilgileriniz en yakin taksi duragina iletilmistir");
							}
			}

		if (tus==2)
			{
				printf("Bolge Seciniz\n Mentese:1 \n Bodrum:2 \n Fethiye:3 \n Marmaris:4 \n Ula:5 \n \n:");
					scanf("%d",&otb);
						if(otb==1){
					printf("48-22 Menteþe Otogar-Bodrum Havalimani \n 48-11 Yatagan-Mentese \n 48-12 Ortaca-Mentese \n 48-20 Kavaklidere-Mentese \n 1-49 Mentese Stadyum-Akyaka \n");
					}
						if(otb==2){
					printf("2-5 Bodrum-Turgutreis \n 2-48 Bitez Yali Adliye-Bodrum \n 2-2 Bodrum-Koncacik Adayer \n 2-3 Bodrum Dagbelen Yaka \n 2-4 Bodrum-Akyarlar \n");
					}	
						if(otb==3){
					("3-50 Fethiye-Gocek \n 3-20 Fethiye-Nif \n 3-51 Fethiye-Incirkoy \n 3-40 Fethiye-Oludeniz \n 3-41 Fethiye-Kozagac \n 48-25 Fethiye Otogar-Dalaman Havalimani \n");           
					}	
						if(otb==4){
					printf("10-12 Marmaris Otogar-Site \n 10-15 Marmaris-Turunc \n 10-9 Marmaris-Orhaniye \n 48-26 Marmaris Otogar-Dalaman Havalimani \n 10-17 Marmaris-Yalancibogaz \n");
					}	
						if(otb==5){
					printf("12-7 Mentese-Gokce \n 12-1 Ula-Kýzýlyaka \n 12-2 Ula-Kýzýlagac \n 48-21 Mentese-Ula \n 12-5 Mentese-Akyaka \n 12-8 Akyaka-Gokce \n 12-11 Mentese-Karabortlen \n");
					}		
			}
		
			
		if (tus==3){
			printf("Gezilecebilecek yerler: \n Saklikent Kanyonu \n Dalaman Cayi\n Uyku Vadisi \n Turgut Selalesi \n Yuvarlak Nehri \n Azmak Cayi\n Kelebekler Selalesi \n Likya Yolu \n Sedir Adasi \n Loryma Antik Nehri \n Marmaris Kalesi \n");     
		}
		
		
		if (tus==4){
			printf("Ula Otogari \n Oren Limani \n Ortaca Otogari \n Mugla Otogari \n Milas-Bodrum Havaalani \n Milas Otogari \n Marmaris Otogari \n Koycegiz Otogari \n Fethiye Otogari \n Datca Otogari \n Dalaman Otogari \n");
		}
		
		ig();


	return 0;
}
