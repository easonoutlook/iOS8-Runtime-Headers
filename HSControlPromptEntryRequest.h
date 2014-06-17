/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSDictionary;

@interface HSControlPromptEntryRequest : HSRequest  {
    NSDictionary *_attributes;
    unsigned int _interfaceID;
}

@property(readonly) NSDictionary * attributes;
@property(readonly) unsigned int interfaceID;

+ (id)portInfoRequestWithInterfaceID:(unsigned int)arg1 key:(unsigned int)arg2;
+ (id)requestWithInterfaceID:(unsigned int)arg1 attributes:(id)arg2;

- (id)_commandStringForCommand:(unsigned int)arg1;
- (id)_bodyDataForAttributes:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 attributes:(id)arg2;
- (unsigned int)interfaceID;
- (void).cxx_destruct;
- (id)attributes;

@end
