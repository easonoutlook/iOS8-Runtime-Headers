/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSLock;

@interface GEOUserSession : NSObject  {
    double _sessionCreationTime;
    double _usageSessionIDGenerationTime;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    NSString *_sessionIDString;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _usageCollectionSessionID;
    unsigned int _sequenceNumber;
    NSLock *_lock;
}

@property(readonly) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property(readonly) unsigned int sequenceNumber;
@property(readonly) NSString * sessionIDString;
@property(readonly) struct { unsigned long long x1; unsigned long long x2; } usageCollectionSessionID;
@property(readonly) double sessionCreationTime;

+ (void)setIsGeod;
+ (id)sharedInstance;

- (double)sessionCreationTime;
- (struct { unsigned long long x1; unsigned long long x2; })usageCollectionSessionID;
- (id)sessionIDString;
- (void)_safe_renewUsageCollectionSessionID;
- (void)_updateSessionID;
- (void)_setDefault:(id)arg1 forKey:(id)arg2;
- (void)_updateWithNewUUIDForSessionID:(struct { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)_renewUsageCollectionSessionID;
- (id)_defaultForKey:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)dealloc;
- (id)init;
- (unsigned int)sequenceNumber;

@end
