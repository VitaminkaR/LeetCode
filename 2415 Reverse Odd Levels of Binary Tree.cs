

TreeNode root = new TreeNode(2,
    new TreeNode(3,
        new TreeNode(7,
            new TreeNode(19),
            new TreeNode(23)
            ),
        new TreeNode(11,
            new TreeNode(29),
            new TreeNode(31)
            )
        ),
    new TreeNode(5,
        new TreeNode(13,
            new TreeNode(37),
            new TreeNode(41)
            ),
        new TreeNode(17,
            new TreeNode(43),
            new TreeNode(47)
            )
        )
);

TreeNode res = new Solution().ReverseOddLevels(root);
Console.ReadKey();

public class TreeNode
{
    public int val;
    public TreeNode left;
    public TreeNode right;
    public TreeNode(int val = 0, TreeNode left = null, TreeNode right = null)
    {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

public class Solution
{
    public TreeNode ReverseOddLevels(TreeNode root)
    {
        if (root == null || root.right == null)
            return root;
        Queue<TreeNode> queue = new Queue<TreeNode>();
        queue.Enqueue(root.left);
        queue.Enqueue(root.right);
        int i = 1;
        while (true)
        {
            if (i % 2 == 0)
            {
                i++;
                int qc = queue.Count;
                for (int j = 0; j < qc; j++)
                {
                    TreeNode node = queue.Dequeue();
                    if (node.right == null)
                        return root;
                    queue.Enqueue(node.left);
                    queue.Enqueue(node.right);
                }
                continue;
            }
            int nc = (int)Math.Pow(2, i);

            TreeNode[] nodes = new TreeNode[nc];
            for (int j = 0; j < nc; j++)
            {
                nodes[j] = queue.Dequeue();
                if (nodes[j].left != null) queue.Enqueue(nodes[j].left);
                if (nodes[j].right != null) queue.Enqueue(nodes[j].right);
            }

            for (int j = 0; j < nodes.Length / 2; j++)
            {
                int t = nodes[j].val;
                nodes[j].val = nodes[nc - j - 1].val;
                nodes[nc - j - 1].val = t;
            }

            if (queue.Count == 0)
                return root;
            i++;
        }
    }
}