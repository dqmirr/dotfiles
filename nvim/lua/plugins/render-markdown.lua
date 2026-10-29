return {
  "render-markdown.nvim",
  opts = {
    checkbox = {
      enabled = true,
      -- render_modes = true,
      unchecked = { icon = "󰄱 " },
      checked = { icon = "󰱒" },
      custom = { todo = { raw = "[-]", rendered = "󰥔" } },
    },
  },
}
