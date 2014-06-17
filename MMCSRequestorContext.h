/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class MMCSEngine;

@interface MMCSRequestorContext : NSObject  {
    MMCSEngine *_engine;
    char **_signatures;
    unsigned long _count;
    unsigned long long *_itemIDs;
    unsigned int *_itemFlags;
    char **_authTokens;
    int _type;
}

@property MMCSEngine * engine;
@property int type;
@property unsigned long count;
@property unsigned long long* itemIDs;
@property unsigned int* itemFlags;
@property char ** signatures;
@property char ** authTokens;

+ (id)contextWithEngine:(id)arg1 type:(int)arg2;

- (void)setAuthTokens:(char **)arg1;
- (char **)authTokens;
- (void)setItemFlags:(unsigned int*)arg1;
- (unsigned int*)itemFlags;
- (void)setItemIDs:(unsigned long long*)arg1;
- (void)setSignatures:(char **)arg1;
- (char **)signatures;
- (id)initWithEngine:(id)arg1 type:(int)arg2;
- (void)setEngine:(id)arg1;
- (id)engine;
- (unsigned long long*)itemIDs;
- (void).cxx_destruct;
- (void)setCount:(unsigned long)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)count;
- (void)dealloc;

@end
