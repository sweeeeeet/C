package cn.booksystem;

import java.util.Scanner;

public class Menu {
Scanner scan=new Scanner(System.in);
 Date date=new Date();
 Admain admin=new Admain();
 Book[] bs=new Book[50];
 Book[] jieyue=new Book[50];
 int m=0;
 
 
 public void chuanData(){
	 bs=date.init();
 }
 
 
public void welecome(){
	System.out.println("��ӭ����ͼ�����ϵͳ��");
	System.out.println("\t1.��¼ϵͳ\n");
	System.out.println("\t2.�˳�\n");
	
	int ok=scan.nextInt();
	switch (ok) {
	case 1:
		this.denglu();
	case 2:
		System.exit(0);
		break;
	default:
		System.out.println("�������ִ���������");
	}
}
	public void denglu(){
		System.out.println("��ӭ����miniͼ��ϵͳ");
		System.out.println("********************************");
	
	int count=3;
	boolean flag=true;
	do{
		System.out.println("�������û���");
		String uname=scan.next();
		System.out.println("����������");
		String upass=scan.next();
		if(uname.equals(admin.username)&&upass.equals(admin.password)){
			this.mainMenu();
		flag=false;
		}else{
		count--;
		if(count==0){
			System.out.println("���������Ĵ�����������");
			System.out.println("�����쳢��");
			System.exit(0);
		}
		System.out.println("������"+count+"�λ���");}
	
	}while(flag);
	}
	
	public void mainMenu() {
		System.out.println("\t��ӭ miniͼ�����ϵͳ2.0�� >> ���˵�\n");
		System.out.println("******************************************\n");
		System.out.println("\t\t1. �  ��  ͼ  ��\n");
		System.out.println("\t\t2. ��  ��  ͼ  ��\n");
		System.out.println("\t\t3. ��  ��  ͼ  ��\n");
		System.out.println("\t\t4. ��  ��  ͼ  ��\n");
		System.out.println("\t\t5. ��  ��  ͼ  ��\n");
		System.out.println("\t\t6. ��  ��  ��  ϸ\n");
		System.out.println("\t\t7. ɾ  ��  ͼ  ��\n");
		System.out.println("\t\t8. ��  ��  ͼ  ��\n");
		System.out.println("\t\t9. ��             ��\n");
		System.out.println("******************************************\n");
		System.out.println("��ѡ���������� ��\n");
		int ok = scan.nextInt();
		switch (ok) {
		case 1:
			liulan();
			break;
		case 2:
			jieyue();
			break;
		case 3:
			guihuan();
			break;
		case 4:
			tianjia();
			break;
		case 5:
			chazhao();
			break;
		case 6:
			jieyueDetail();
			break;
		case 7:
			shanchu();
			break;
		case 8:
			xiugai();
			break;
		case 9:
			System.out.println("ллʹ��");
			System.exit(0);
			break;
			
		default:
			System.out.println("��������������������");
			
		}
	}
		public void xiugai() {
			System.out.println("miniͼ�����ϵͳ  >>  ��  ��  ͼ  ��\n");
			System.out.println("---------------------------------------------");
		System.out.println("������Ҫ�޸ĵ�ͼ����");
		int id=scan.nextInt();
		for (int i = 0; i < bs.length; i++) {
		
			if(bs[i]!=null)
				if(bs[i].id==id){
				System.out.println("������Ҫ�޸ĵ�ͼ������");
				String name=scan.next();
				bs[i].name=name;
				System.out.println("������Ҫ�޸ĵ�ͼ��״̬��0.���ɽ��Ļ�1.�ɽ��ģ�");
				int state=scan.nextInt();
				bs[i].state=state;
				System.out.println("�޸ĳɹ�");
				}else
					System.out.println("�޴�ͼ�飬��˲������");
			
			
		}
		returnMenu();
	}


		private void shanchu() {
			System.out.println("miniͼ�����ϵͳ  >>    ɾ  ��  ͼ  ��\n");
			System.out.println("---------------------------------------------");
		System.out.println("������Ҫɾ����ͼ����");
		int id=scan.nextInt();
		if(bs[id]!=null){
			bs[id]=null;
			System.out.println("ɾ���ɹ�");
		}else{
			System.out.println("����������");
			
		}
		
		returnMenu();
	}


		private void jieyueDetail() {
			System.out.println("miniͼ�����ϵͳ  >>  ��  ��  ��  ϸ\n");
			System.out.println("---------------------------------------------");
			System.out.println("ͼ����\t\tͼ������\t\t����״̬");
		for (int i = 0; i < jieyue.length; i++) {
			if(jieyue[i]!=null)
				System.out.println(jieyue[i].toString());
		}
		returnMenu();
	}


		private void chazhao() {
			System.out.println("miniͼ�����ϵͳ  >>  ��   ��   ͼ  ��\n");
			System.out.println("---------------------------------------------");
			System.out.println("1.��ͼ��id����2.����������");
			int choice=scan.nextInt();
			switch (choice) {
			case 1:
				idchazhao();
				break;
			case 2:
				namechazhao();
				break;
			default:
				System.out.println("�������ִ���������");
				break;
			}
			}


			public void namechazhao() {
				System.out.println("---------------------------------");
				System.out.println("������ͼ������");
			String name=scan.next();
			boolean flag=false;
			for(int i=0;i < bs.length; i++) {
				if(bs[i]!=null){
					if(bs[i].name.equals(name)){
						
							System.out.println("ͼ������"+bs[i].toString());
					
							flag=false;
							break;
						
					}
		            }
				}
			if(flag){
				System.out.println("�������������");
				returnMenu();
			}
			}


			public void idchazhao(){
				System.out.println("---------------------------------");
				System.out.println("������ͼ����");
				int id=scan.nextInt();
				boolean flag =false;
				for (int i = 0; i < bs.length; i++) {
					if(bs[i]!=null){
						if(bs[i].id==id){
							
								System.out.println(bs[i].toString());
								flag=false;
								break;
							
						}
					}
					
				}
				if(flag){
					System.out.println("�������������");
					returnMenu();
				}
				returnMenu();
			}
	


		private void tianjia() {
			System.out.println("miniͼ�����ϵͳ  >>  ��   ��  ͼ  ��\n");
			System.out.println("---------------------------------------------");
		
			System.out.println("������ͼ�����ƣ�");
			String name=scan.next();
			for (int i = 0; i < bs.length; i++) {
				if(bs[i]==null){
				Book b=new Book();
				b.id=i+1;
				b.name=name;
				b.state=1;
				bs[i]=b;}
			}
			System.out.println("���"+name+"�ɹ�");
			System.out.println("---------------------------");
			returnMenu();
	}


		private void guihuan() {
			System.out.println("miniͼ�����ϵͳ  >>  ��   ��   ͼ  ��\n");
			System.out.println("---------------------------------------------");	
			System.out.println("������ͼ���ţ�");
			int id=scan.nextInt();
			boolean flag=false;
			for (int i = 0; i < bs.length; i++) {
				if(bs[i]!=null)
					if(bs[i].state==0){
					  if(bs[i].id==id){
						System.out.println(bs[i].name+"�黹�ɹ�");
				         bs[i].state=1;
				      for (int j = 0; j < jieyue.length; j++) {
						if(jieyue[j]!=null)
							if(jieyue[j].id==id)
								jieyue[j]=null;
					
						break;		
					}   
				      flag=true;
					  }
					}else{
						flag=true;
						System.out.println("����δ���������黹");
					}
			}
			if(flag==false){
				System.out.println("�޴�ͼ��");
			       this.mainMenu();	
			}
			System.out.println("---------------------------");
			returnMenu();
		
	}


		public void liulan(){
		System.out.println("miniͼ�����ϵͳ");
		System.out.println("----------------------------");
		for(int i=0;i<bs.length;i++){
			if(bs[i]!=null);{
				System.out.println(bs[i].toString());}
		}
		System.out.println("---------------------------");
		returnMenu();
	}
		
	public void returnMenu(){
		String ok;
		System.out.println("������һ����y/n��");
		do{
			ok=scan.next();
			mainMenu();
		}while("n".equals(ok));
			System.out.println("��������");
			}
		
	
public void jieyue() {
	System.out.println("miniͼ�����ϵͳ  >>  ��  ��   ͼ  ��\n");
	System.out.println("---------------------------------------------");
	System.out.println("��������ķ�ʽ��1.id����2.�������ģ�");
	int choice=scan.nextInt();
	switch (choice) {
	case 1:
		idjieyue();
		break;
	case 2:
		namejieyue();
		break;
	default:
		System.out.println("�������ִ���������");
		break;
	}
	
	}


	public void namejieyue() {
		System.out.println("---------------------------------------------");
		System.out.println("�������������");
	String name=scan.next();
	boolean flag=true;
	for(int i=0;i < bs.length; i++) {
		if(bs[i]!=null){
			if(bs[i].name.equals(name)){
				if(bs[i].state==1){
					System.out.println("���ġ�"+bs[i].name+"���ɹ�");
					bs[i].state=0;
					jieyue[m++]=bs[i];
					flag=false;
					break;
				}
			}
}else {
	flag = false;
	System.out.println("�á�" + bs[i].name + "���ѱ��������ǰ���ɽ���");
	break;
  }
		}
	if(flag){
		System.out.println("�������������");
	}
	returnMenu();
	}


	public void idjieyue(){
		System.out.println("---------------------------------------------");
		System.out.println("������ͼ����");
		int id=scan.nextInt();
		boolean flag =false;
		for (int i = 0; i < bs.length; i++) {
			if(bs[i]!=null){
				if(bs[i].id==id){
					if(bs[i].state==1){
						System.out.println("���ġ�"+bs[i].name+"���ɹ�");
						bs[i].state=0;
						jieyue[m++]=bs[i];
						flag=false;
						break;
					}else{
						flag = false;
    					System.out.println("�á�" + bs[i].name + "���ѱ��������ǰ���ɽ���");
    					break;
					}
				}
			}
			
		}
		if(flag){
			System.out.println("�������������");
		}
		
		returnMenu();
	}
	
	
}
		
		
		


