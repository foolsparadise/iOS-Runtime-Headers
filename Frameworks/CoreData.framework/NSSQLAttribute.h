/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLAttribute : NSSQLColumn

@property (getter=isConstrained, nonatomic) bool constrained;
@property (nonatomic, readonly) NSSet *triggerKeys;

- (void)_setIsBackedByTrigger:(bool)arg1;
- (unsigned char)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (void)addKeyForTriggerOnRelationship:(id)arg1;
- (id)attributeDescription;
- (void)dealloc;
- (id)initForReadOnlyFetchWithExpression:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (bool)isBackedByTrigger;
- (bool)isConstrained;
- (bool)isFileBackedFuture;
- (bool)isUnique;
- (void)setConstrained:(bool)arg1;
- (bool)shouldIndex;
- (id)triggerKeys;

@end
