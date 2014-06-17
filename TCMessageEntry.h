/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, NSArray;

@interface TCMessageEntry : NSObject  {
    unsigned int m_timeStamp;
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

@property unsigned int timeStamp;

+ (void)initialize;

- (void)logWithCat:(id)arg1;
- (id)getParameter:(unsigned int)arg1;
- (unsigned int)getParameterCount;
- (id)affectedObjects;
- (int)getCount;
- (int)getMessageTag;
- (int)timeStampCompare:(id)arg1;
- (void)addAffectedObject:(id)arg1;
- (id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(void*)arg4;
- (void)mergeEntries:(id)arg1;
- (id)getMessageText;
- (void)setTimeStamp:(unsigned int)arg1;
- (unsigned int)timeStamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
