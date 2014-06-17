/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, NSMutableData;

@interface CKDPlistResponseBodyParser : NSObject <CKDResponseBodyParser> {
    NSError *_parserError;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _objectParsedBlock;

    NSMutableData *_parserData;
}

@property(copy) id objectParsedBlock;
@property(retain) NSMutableData * parserData;
@property(retain) NSError * parserError;


- (void)setParserData:(id)arg1;
- (id)parserData;
- (void)setParserError:(id)arg1;
- (id)parserError;
- (id)objectParsedBlock;
- (void)finishWithCompletion:(id)arg1;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (void).cxx_destruct;

@end
