# 코로나 환자 관리 프로그램 - 3분반 6조

![image](https://user-images.githubusercontent.com/60650967/175775137-4bf498fa-0700-4494-b1a0-c36b75527826.png)
  
  
  
  
　  
## Description

> 데이터베이스응용 팀프로젝트  

> 2021.11.13 ~ 2021.12.12  
  
  
  
  
　  
## Project Background and Objectives

![image](https://user-images.githubusercontent.com/60650967/175775233-b90fd65d-fc7f-4755-a836-456070be8300.png)

* 코로나19로 인해 확진자의 격리 및 치료가 급격히 증가하고 있다. 하지만 병원에서 급격한 격리 환자를 수용할 병실 관리가 부족한 현실이다.  
* 본 프로젝트에서는 코로나 환자 관리 프로그램을 구축하여 병원에서 격리 환자의 정보를 체계적으로 관리하고, 병실의 수용인원을 파악하여 원활한 호실 관리를 하도록 도와줄 수 있도록 한다.  
  
  
  
  
　  
## Summary
* 관리자, 의사, 간호사는 시스템에 로그인할 수 있다.  
* 관리자는 의사 계정 추가 및 수정, 간호사 계정 추가 및 수정, 부서 추가 및 삭제를 할 수 있다.  
* 의사는 환자의 등록, 정보 조회, 정보 수정, 퇴원 처리, 데이터 삭제를 할 수 있다.  
* 간호사는 환자의 추가, 조회, 정보 수정, 퇴원 처리, 데이터 삭제를 할 수 있다. 그리고 병실의 관리, 추가, 조회, 수정 또한 가능하다.
  
  
  
  
　  
## Use Case Diagram
* 기능분석으로 유스 케이스 다이어그램을 통해 접근자(의사,간호사,관리자)인 액터와 각 기능에 대한 항목들을 시스템의 최소 단위인 프로세스로 나타내어 유스 케이스 다이어그램을 토대로 개발 일정 산출의 근거로 사용한다.
![DB-3분반-6조-UML](https://user-images.githubusercontent.com/60650967/175775537-7adb3dc6-c03d-463e-859f-8201e88ed379.png)
  
  
  
  
　  
## ER diagram
* 코로나 환자 관리 프로그램에는 6개의 개체가 의사, 간호사, 환자, 병실, 부서, 관리자 계정으로 이루어져 있다. 의사와 간호사는 각각 부서와 소속 관계를 맺고 있다. 환자는 의사와 담당 관계를 맺고 있고, 병실과 입원 관계를 맺고 있다.
* 관리자는 의사, 간호사, 부서 개체를 관리하지만 직접적인 관계가 연결되어 있지 않기 때문에 별도로 기술되어 있다.  

 ![DB-3분반-6조-ERD최종](https://user-images.githubusercontent.com/60650967/175775418-f41798b4-55d6-4913-85f0-14023b17c4b0.png)
  
  
  
  
　  
## Requirements Specification
* 코로나 환자 관리 프로그램은 주된 기능은 총 4개로 로그인, 환자 관리, 병실 관리, 직원 계정 및 부서 관리로 구성된다.
![image](https://user-images.githubusercontent.com/60650967/175775456-35def75f-e490-4b75-b86a-221a730faaba.png)
  
  
  
  
　  
## About Project
<img src="https://img.shields.io/badge/Language-Pro*C-green?style=flat"/>  


* 구현 영상  
[![IMAGE ALT TEXT HERE](http://img.youtube.com/vi/XqZwePCXGaQ/0.jpg)](http://www.youtube.com/watch?v=XqZwePCXGaQ)
