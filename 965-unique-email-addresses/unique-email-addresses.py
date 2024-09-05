class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        unq=set()
        for email in emails:
            local , domain = email.split('@')

            local= local.split('+')[0]

            local=local.replace('.',"")
            

            unq.add((local,domain))
        return len(unq)




        
        