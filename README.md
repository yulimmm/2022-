# 2022-seoul-hardware-hackathon 우수상
주제: 언택트 시대에 사회적 약자의 문제를 해결하는 ICT 기술

### Take Car 소개
- 지체장애인, 노약자들도 사용하기 쉬운 쇼핑카트
- 디지털 소외계층도 사용하기 쉬운 간단한 계산대 

### 핵심 아이디어
 - 라이다로 사람 감지 후 모터로 사람 follow
 - 카드 찍고 개찰구가 열리면, 지나가면서 자동 결제 시스템
 - LED를 통한 카트 작동확인
 - 물건 카드 태그 후, 쇼핑 카트 문 열리면 물건 담기
 - 물건 리스트를 aws 서버로 관리

### 내가 구현한 부분 구현 기술 (Human Follower)
 - ros로 라이다 스캔
 - 아두이노로 모터 제어
 - ros와 아두이노 통신

### 구현 환경
 - ros mellodic, jetson nano, ydlidar x4
 - arduino uno, BLDC모터 BL 4281 24V 77.5W, 모터 드라이버 BLD-200

### 팀원
 - Yoo-jung
 - micromi
 - HwangGoeun
 

## 구현영상
- https://youtu.be/5jeD3DZw2U4
