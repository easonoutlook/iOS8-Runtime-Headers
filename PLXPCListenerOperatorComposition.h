/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PLOperator, NSDictionary;

@interface PLXPCListenerOperatorComposition : NSObject  {
    NSDictionary *_registration;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _operatorBlock;

    PLOperator *_operator;
}

@property(readonly) NSDictionary * registration;
@property(copy) id operatorBlock;
@property PLOperator * operator;


- (void)messageRecievedForClientID:(short)arg1 withProcessName:(id)arg2 withKey:(id)arg3 withPayload:(id)arg4;
- (void)setOperator:(id)arg1;
- (id)initWithOperator:(id)arg1 withRegistration:(id)arg2 withBlock:(id)arg3;
- (id)registration;
- (void)setOperatorBlock:(id)arg1;
- (id)operatorBlock;
- (id)operator;
- (void).cxx_destruct;
- (id)description;

@end