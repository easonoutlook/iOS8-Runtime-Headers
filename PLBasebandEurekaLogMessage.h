/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSData, NSString;

@interface PLBasebandEurekaLogMessage : PLBasebandMessage  {
    struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; } *_header;
    NSData *_payload;
}

@property(readonly) NSString * eventCodeString;
@property(readonly) unsigned int eventCode;
@property struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }* header;
@property(retain) NSData * payload;


- (void)setHeader:(struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }*)arg1;
- (unsigned int)eventCode;
- (id)eventCodeString:(unsigned int)arg1;
- (id)stringForUnknownBytes:(unsigned int)arg1;
- (id)tooShortErrorString;
- (id)eventCodeString;
- (id)payloadString;
- (struct _PLBasebandLogHeader { struct _PLBasebandMessageHeader { unsigned char x_1_1_1; } x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; }*)header;
- (void)logWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (void)setPayload:(id)arg1;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;

@end
