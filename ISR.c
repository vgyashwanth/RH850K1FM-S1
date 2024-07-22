#include"GPIO.h"
#include"common_declarations.h"
#pragma interrupt Toggle(enable=false, channel=142, fpu=true, callt=false)


void eiint0(void) {
    // Reserved
}

void eiint1(void) {
    // Reserved
}

void eiint2(void) {
    // Reserved
}

void eiint3(void) {
    // Reserved
}

void eiint4(void) {
    // Reserved
}

void eiint5(void) {
    // Reserved
}

void eiint6(void) {
    // Reserved
}

void eiint7(void) {
    // Reserved
}

void eiint8(void) {
    // Interrupt for CH0 of TAUD0
}

void eiint9(void) {
    // Interrupt for CH2 of TAUD0
}

void eiint10(void) {
    // Interrupt for CH4 of TAUD0
}

void eiint11(void) {
    // Interrupt for CH6 of TAUD0
}

void eiint12(void) {
    // Interrupt for CH8 of TAUD0
}

void eiint13(void) {
    // Interrupt for CH10 of TAUD0
}

void eiint14(void) {
    // Interrupt for CH12 of TAUD0
}

void eiint15(void) {
    // Interrupt for CH14 of TAUD0
}

void eiint16(void) {
    // TAPA0 peak interrupt 0
}

void eiint17(void) {
    // TAPA0 valley interrupt 0
}

void eiint18(void) {
    // ADCA0 SG1 end interrupt
}

void eiint19(void) {
    // ADCA0 SG2 end interrupt
}

void eiint20(void) {
    // ADCA0 SG3 end interrupt
}

void eiint21(void) {
    // Dedicated interrupt for on-chip debug function
}

void eiint22(void) {
    // CAN global error interrupt
}

void eiint23(void) {
    // CAN receive FIFO interrupt
}

void eiint24(void) {
    // CAN0 error interrupt
}

void eiint25(void) {
    // CAN0 transmit/receive FIFO receive complete interrupt
}

void eiint26(void) {
    // CAN0 transmit interrupt
}

void eiint27(void) {
    // CSIG0 communication status interrupt
}

void eiint28(void) {
    // CSIG0 receive status interrupt
}

void eiint29(void) {
    // CSIH0 communication status interrupt
}

void eiint30(void) {
    // CSIH0 receive status interrupt
}

void eiint31(void) {
    // CSIH0 communication error interrupt
}

void eiint32(void) {
    // CSIH0 job completion interrupt
}

void eiint33(void) {
    // RLIN30 interrupt
}

void eiint34(void) {
    // RLIN30 transmit interrupt
}

void eiint35(void) {
    // RLIN30 receive complete interrupt
}

void eiint36(void) {
    // RLIN30 status interrupt
}

void eiint37(void) {
    // External interrupt
}

void eiint38(void) {
    // External interrupt
}

void eiint39(void) {
    // External interrupt
}

void eiint40(void) {
    // WDTA0 75% interrupt
}

void eiint41(void) {
    // WDTA1 75% interrupt
}

void eiint42(void) {
    // Reserved
}

void eiint43(void) {
    // External interrupt
}

void eiint44(void) {
    // External interrupt
}

void eiint45(void) {
    // External interrupt
}

void eiint46(void) {
    // External interrupt
}

void eiint47(void) {
    // External interrupt
}

void eiint48(void) {
    // Interrupt for TAUD0 channel 1
}

void eiint49(void) {
    // Interrupt for TAUD0 channel 3
}

void eiint50(void) {
    // Interrupt for TAUD0 channel 5
}

void eiint51(void) {
    // Interrupt for TAUD0 channel 7
}

void eiint52(void) {
    // Interrupt for TAUD0 channel 9
}

void eiint53(void) {
    // Interrupt for TAUD0 channel 11
}

void eiint54(void) {
    // Interrupt for TAUD0 channel 13
}

void eiint55(void) {
    // Interrupt for TAUD0 channel 15
}

void eiint56(void) {
    // ADCA0 error interrupt
}

void eiint57(void) {
    // CSIG0 communication error interrupt
}

void eiint58(void) {
    // RLIN20 interrupt
}

void eiint59(void) {
    // RLIN21 interrupt
}

void eiint60(void) {
    // DMA00 transfer completion
}

void eiint61(void) {
    // DMA01 transfer completion
}

void eiint62(void) {
    // DMA02 transfer completion
}

void eiint63(void) {
    // DMA03 transfer completion
}

void eiint64(void) {
    // DMA04 transfer completion
}

void eiint65(void) {
    // DMA05 transfer completion
}

void eiint66(void) {
    // DMA06 transfer completion
}

void eiint67(void) {
    // DMA07 transfer completion
}

void eiint68(void) {
    // DMA10 transfer completion
}

void eiint69(void) {
    // DMA11 transfer completion
}

void eiint70(void) {
    // DMA12 transfer completion
}

void eiint71(void) {
    // DMA13 transfer completion
}

void eiint72(void) {
    // DMA14 transfer completion
}

void eiint73(void) {
    // DMA15 transfer completion
}

void eiint74(void) {
    // DMA16 transfer completion
}

void eiint75(void) {
    // DMA17 transfer completion
}

void eiint76(void) {
    // RIIC0 transmit data empty interrupt
}

void eiint77(void) {
    // RIIC0 receive error/event interrupt
}

void eiint78(void) {
    // RIIC0 receive complete interrupt
}

void eiint79(void) {
    // RIIC0 transmit complete interrupt
}

void eiint80(void) {
    // Interrupt for TAUJ0 channel 0
}

void eiint81(void) {
    // Interrupt for TAUJ0 channel 1
}

void eiint82(void) {
    // Interrupt for TAUJ0 channel 2
}

void eiint83(void) {
    // Interrupt for TAUJ0 channel 3
}

void eiint84(void) {
    // OSTM0 interrupt
}

void eiint85(void) {
    // ENCA0 overflow interrupt
}

void eiint86(void) {
    // ENCA0 underflow interrupt
}

void eiint87(void) {
    // ENCA0 match/capture interrupt 0
}

void eiint88(void) {
    // ENCA0 match/capture interrupt 1
}

void eiint89(void) {
    // ENCA0 encoder clear interrupt
}

void eiint90(void) {
    // KR0 key interrupt
}

void eiint91(void) {
    // PWSA0 queue full interrupt
}

void eiint92(void) {
    // PWGA interrupt group 00 (PWGA0 to PWGA31)
}

void eiint93(void) {
    // PWGA interrupt group 01 (PWGA32 to PWGA63)
}

void eiint94(void) {
    // Reserved
}

void eiint95(void) {
    // Reserved
}

void eiint96(void) {
    // Reserved
}

void eiint97(void) {
    // Reserved
}

void eiint98(void) {
    // Reserved
}

void eiint99(void) {
    // Reserved
}

void eiint100(void) {
    // Reserved
}

void eiint101(void) {
    // Reserved
}

void eiint102(void) {
    // Reserved
}

void eiint103(void) {
    // Reserved
}

void eiint104(void) {
    // Reserved
}

void eiint105(void) {
    // Reserved
}

void eiint106(void) {
    // Reserved
}

void eiint107(void) {
    // Reserved
}

void eiint108(void) {
    // Reserved
}

void eiint109(void) {
    // Reserved
}

void eiint110(void) {
    // Flash sequencer end error interrupt
}

void eiint111(void) {
    // Flash sequencer end interrupt
}

void eiint112(void) {
    // LPS0 port polling end interrupt
}

void eiint113(void) {
    // CAN1 error interrupt
}

void eiint114(void) {
    // CAN1 transmit/receive FIFO receive complete interrupt
}

void eiint115(void) {
    // CAN1 transmit interrupt
}

void eiint116(void) {
    // CSIH1 communication status interrupt
}

void eiint117(void) {
    // CSIH1 receive status interrupt
}

void eiint118(void) {
    // CSIH1 communication error interrupt
}

void eiint119(void) {
    // CSIH1 job completion interrupt
}

void eiint120(void) {
    // RLIN31 interrupt
}

void eiint121(void) {
    // RLIN31 transmit interrupt
}

void eiint122(void) {
    // RLIN31 receive complete interrupt
}

void eiint123(void) {
    // RLIN31 status interrupt
}

void eiint124(void) {
    // Reserved
}

void eiint125(void) {
    // Reserved
}

void eiint126(void) {
    // Reserved
}

void eiint127(void) {
    // Reserved
}

void eiint128(void) {
    // External interrupt
}

void eiint129(void) {
    // External interrupt
}

void eiint130(void) {
    // External interrupt
}

void eiint131(void) {
    // External interrupt
}

void eiint132(void) {
    // External interrupt
}

void eiint133(void) {
    // External interrupt
}

void eiint134(void) {
    // External interrupt
}

void eiint135(void) {
    // External interrupt
}

void eiint136(void) {
    // DMA08 transfer completion
}

void eiint137(void) {
    // DMA09 transfer completion
}

void eiint138(void) {
    // DMA18 transfer completion
}

void eiint139(void) {
    // DMA19 transfer completion
}

void eiint140(void) {
    // Reserved
}

void eiint141(void) {
    // Reserved
}

void Toggle(void) {
    /*TAUB0 interrupt*/
     P(PORT10)^= (1U<<PIN11);
}

void eiint143(void) {
    // Reserved
}

void eiint144(void) {
    // Reserved
}

void eiint145(void) {
    // Reserved
}

void eiint146(void) {
    // Reserved
}

void eiint147(void) {
    // Reserved
}

void eiint148(void) {
    // Reserved
}

void eiint149(void) {
    // Reserved
}

void eiint150(void) {
    // Reserved
}

void eiint151(void) {
    // Reserved
}

void eiint152(void) {
    // Reserved
}

void eiint153(void) {
    // Reserved
}

void eiint154(void) {
    // Reserved
}

void eiint155(void) {
    // Reserved
}

void eiint156(void) {
    // Reserved
}

void eiint157(void) {
    // Reserved
}

void eiint158(void) {
    // Reserved
}

void eiint159(void) {
    // Reserved
}

void eiint160(void) {
    // Reserved
}

void eiint161(void) {
    // Reserved
}

void eiint162(void) {
    // Reserved
}

void eiint163(void) {
    // Reserved
}

void eiint164(void) {
    // Reserved
}

void eiint165(void) {
    // Reserved
}

void eiint166(void) {
    // Reserved
}

void eiint167(void) {
    // Reserved
}

void eiint168(void) {
    // Reserved
}

void eiint169(void) {
    // Reserved
}

void eiint170(void) {
    // Reserved
}

void eiint171(void) {
    // Reserved
}

void eiint172(void) {
    // Reserved
}

void eiint173(void) {
    // Reserved
}

void eiint174(void) {
    // Reserved
}

void eiint175(void) {
    // Reserved
}

void eiint176(void) {
    // Reserved
}

void eiint177(void) {
    // Reserved
}

void eiint178(void) {
    // Reserved
}

void eiint179(void) {
    // Reserved
}

void eiint180(void) {
    // Reserved
}

void eiint181(void) {
    // Reserved
}

void eiint182(void) {
    // Reserved
}

void eiint183(void) {
    // Reserved
}

void eiint184(void) {
    // Reserved
}

void eiint185(void) {
    // Reserved
}

void eiint186(void) {
    // Reserved
}

void eiint187(void) {
    // Reserved
}

void eiint188(void) {
    // Reserved
}

void eiint189(void) {
    // Reserved
}

void eiint190(void) {
    // Reserved
}

void eiint191(void) {
    // Reserved
}

void eiint192(void) {
    // Reserved
}

void eiint193(void) {
    // Reserved
}

void eiint194(void) {
    // Reserved
}

void eiint195(void) {
    // Reserved
}

void eiint196(void) {
    // Reserved
}

void eiint197(void) {
    // Reserved
}

void eiint198(void) {
    // Reserved
}

void eiint199(void) {
    // Reserved
}

void eiint200(void) {
    // Reserved
}

void eiint201(void) {
    // Reserved
}

void eiint202(void) {
    // Reserved
}

void eiint203(void) {
    // Reserved
}

void eiint204(void) {
    // Reserved
}

void eiint205(void) {
    // Reserved
}

void eiint206(void) {
    // Reserved
}

void eiint207(void) {
    // Reserved
}

void eiint208(void) {
    // Reserved
}

void eiint209(void) {
    // RTCA0 1-second interval interrupt
}

void eiint210(void) {
    // RTCA0 alarm interrupt
}

void eiint211(void) {
    // RTCA0 fixed interval interrupt
}

void eiint212(void) {
    // Reserved
}

void eiint213(void) {
    // Reserved
}

void eiint214(void) {
    // Reserved
}

void eiint215(void) {
    // Reserved
}

void eiint216(void) {
    // Reserved
}

void eiint217(void) {
    // CAN2 error interrupt
}

void eiint218(void) {
    // CAN2 transmit/receive FIFO receive complete interrupt
}

void eiint219(void) {
    // CAN2 transmit interrupt
}

void eiint220(void) {
    // CAN3 error interrupt
}

void eiint221(void) {
    // CAN3 transmit/receive FIFO receive complete interrupt
}

void eiint222(void) {
    // CAN3 transmit interrupt
}

void eiint223(void) {
    // Reserved
}

void eiint224(void) {
    // Reserved
}

void eiint225(void) {
    // Reserved
}

void eiint226(void) {
    // Reserved
}

void eiint227(void) {
    // Reserved
}

void eiint228(void) {
    // RLIN33 interrupt
}

void eiint229(void) {
    // RLIN33 transmit interrupt
}

void eiint230(void) {
    // RLIN33 receive complete interrupt
}

void eiint231(void) {
    // RLIN33 status interrupt
}

void eiint232(void) {
    // Reserved
}

void eiint233(void) {
    // Reserved
}

void eiint234(void) {
    // Reserved
}

void eiint235(void) {
    // Reserved
}

void eiint236(void) {
    // Reserved
}

void eiint237(void) {
    // Reserved
}

void eiint238(void) {
    // Reserved
}

void eiint239(void) {
    // Reserved
}

void eiint240(void) {
    // RIIC1 transmit data empty interrupt
}

void eiint241(void) {
    // RIIC1 receive error/event interrupt
}

void eiint242(void) {
    // RIIC1 receive complete interrupt
}

void eiint243(void) {
    // RIIC1 transmit complete interrupt
}

void eiint244(void) {
    // Reserved
}

void eiint245(void) {
    // Reserved
}

void eiint246(void) {
    // Reserved
}

void eiint247(void) {
    // Reserved
}

void eiint248(void) {
    // Reserved
}

void eiint249(void) {
    // Reserved
}

void eiint250(void) {
    // Reserved
}

void eiint251(void) {
    // Reserved
}

void eiint252(void) {
    // Reserved
}

void eiint253(void) {
    // Reserved
}

void eiint254(void) {
    // Reserved
}

void eiint255(void) {
    // Reserved
}

void eiint256(void) {
    // Reserved
}

void eiint257(void) {
    // Reserved
}

void eiint258(void) {
    // Reserved
}

void eiint259(void) {
    // Reserved
}

void eiint260(void) {
    // Reserved
}

void eiint261(void) {
    // Reserved
}

void eiint262(void) {
    // Reserved
}

void eiint263(void) {
    // Reserved
}

void eiint264(void) {
    // Reserved
}

void eiint265(void) {
    // Reserved
}

void eiint266(void) {
    // Reserved
}

void eiint267(void) {
    // Reserved
}

void eiint268(void) {
    // Reserved
}

void eiint269(void) {
    // Reserved
}

void eiint270(void) {
    // Reserved
}

void eiint271(void) {
    // Reserved
}

void eiint272(void) {
    // CAN4 error interrupt
}

void eiint273(void) {
    // CAN4 transmit/receive FIFO receive complete interrupt
}

void eiint274(void) {
    // CAN4 transmit interrupt
}

void eiint275(void) {
    // Reserved
}

void eiint276(void) {
    // Reserved
}

void eiint277(void) {
    // Interrupt for TAUJ2 channel 0
}

void eiint278(void) {
    // Interrupt for TAUJ2 channel 1
}

void eiint279(void) {
    // Interrupt for TAUJ2 channel 2
}

void eiint280(void) {
    // Interrupt for TAUJ2 channel 3
}

void eiint281(void) {
    // Interrupt for TAUJ3 channel 0
}

void eiint282(void) {
    // Interrupt for TAUJ3 channel 1
}

void eiint283(void) {
    // Interrupt for TAUJ3 channel 2
}

void eiint284(void) {
    // Interrupt for TAUJ3 channel 3
}

void eiint285(void) {
    // Reserved
}

void eiint286(void) {
    // Reserved
}

void eiint287(void) {
    // CAN5 error interrupt
}

void eiint288(void) {
    // CAN5 transmit/receive FIFO receive complete interrupt
}

void eiint289(void) {
    // CAN5 transmit interrupt
}

void eiint290(void) {
    // Reserved
}

void eiint291(void) {
    // Reserved
}

void eiint292(void) {
    // Reserved
}

void eiint293(void) {
    // Reserved
}

void eiint294(void) {
    // Reserved
}

void eiint295(void) {
    // Reserved
}

void eiint296(void) {
    // Reserved
}

void eiint297(void) {
    // Reserved
}

void eiint298(void) {
    // Reserved
}

void eiint299(void) {
    // Reserved
}

void eiint300(void) {
    // Reserved
}

void eiint301(void) {
    // Reserved
}

void eiint302(void) {
    // Reserved
}

void eiint303(void) {
    // Reserved
}

void eiint304(void) {
    // Reserved
}

void eiint305(void) {
    // Reserved
}

void eiint306(void) {
    // Reserved
}

void eiint307(void) {
    // Reserved
}

void eiint308(void) {
    // Reserved
}

void eiint309(void) {
    // Reserved
}

void eiint310(void) {
    // Reserved
}

void eiint311(void) {
    // Reserved
}

void eiint312(void) {
    // Reserved
}

void eiint313(void) {
    // Reserved
}

void eiint314(void) {
    // Reserved
}

void eiint315(void) {
    // Reserved
}

void eiint316(void) {
    // Reserved
}

void eiint317(void) {
    // Reserved
}

void eiint318(void) {
    // Reserved
}

void eiint319(void) {
    // Reserved
}

void eiint320(void) {
    // Reserved
}

void eiint321(void) {
    // Reserved
}

void eiint322(void) {
    // Reserved
}

void eiint323(void) {
    // Reserved
}

void eiint324(void) {
    // Reserved
}

void eiint325(void) {
    // Reserved
}

void eiint326(void) {
    // Reserved
}

void eiint327(void) {
    // Reserved
}

void eiint328(void) {
    // Reserved
}

void eiint329(void) {
    // Reserved
}

void eiint330(void) {
    // Reserved
}

void eiint331(void) {
    // Reserved
}

void eiint332(void) {
    // Reserved
}

void eiint333(void) {
    // Reserved
}

void eiint334(void) {
    // Reserved
}

void eiint335(void) {
    // Reserved
}

void eiint336(void) {
    // Reserved
}

void eiint337(void) {
    // Reserved
}

void eiint338(void) {
    // Reserved
}

void eiint339(void) {
    // Reserved
}

void eiint340(void) {
    // Reserved
}

void eiint341(void) {
    // Reserved
}

void eiint342(void) {
    // Reserved
}

void eiint343(void) {
    // Reserved
}

void eiint344(void) {
    // Reserved
}

void eiint345(void) {
    // Reserved
}

void eiint346(void) {
    // Reserved
}

void eiint347(void) {
    // Status interrupt for RSENT0
}

void eiint348(void) {
    // Receive interrupt for RSENT0
}

void eiint349(void) {
    // Status interrupt for RSENT1
}

void eiint350(void) {
    // Receive interrupt for RSENT1
}

void eiint351(void) {
    // Reserved
}

void eiint352(void) {
    // Reserved
}

void eiint353(void) {
    // Reserved
}

void eiint354(void) {
    // Reserved
}

void eiint355(void) {
    // Reserved
}

void eiint356(void) {
    // LPS0 digital port error interrupt
}

void eiint357(void) {
    // LPS0 analog port error interrupt
}



